#include "CAN_Transceiver_header.h"

uint32_t CAN2Signal(uint8_t *CAN_Signal, SignalInfo *signalinfo, uint8_t Length, uint8_t StartBit) {

    SetSignalInfo(signalinfo, Length, StartBit);

    return ReadCANData(CAN_Signal, signalinfo);
};

int32_t Signed_CAN2Signal(uint8_t *CAN_Signal, SignalInfo *signalinfo, uint8_t Length, uint8_t Startbit) {
    
    SetSignalInfo(signalinfo, Length, Startbit);

    return Unsigned2Signed(ReadCANData(CAN_Signal, signalinfo),Length);
}

void SetSignalInfo(SignalInfo *signalinfo, uint8_t Length, uint8_t StartBit) {

    signalinfo->StartIdx = (uint8_t)(StartBit >> 3U); // == StartBit / 3

    signalinfo->StartBitInArr = StartBit & 7U; // == StartBit % 8

    signalinfo->EndIdx = (uint8_t)((StartBit + Length - 1U) >> 3U);

    signalinfo->UsedIdxCount = signalinfo->EndIdx - signalinfo->StartIdx + 1U;

    switch (signalinfo->UsedIdxCount)
    {
        case 1:
            signalinfo->FirstInterval = Length;
            break;
        
        case 2:
            signalinfo->FirstInterval = ((signalinfo->StartIdx + 1U) << 3U) - StartBit;
            signalinfo->LastInterval = Length - signalinfo->FirstInterval;
            break;
        
        case 3:
            signalinfo->FirstInterval = ((signalinfo->StartIdx + 1U) << 3U) - StartBit;
            signalinfo->LastInterval = Length - signalinfo->FirstInterval - 8U;
            break;
        
        case 4:
            signalinfo->FirstInterval = ((signalinfo->StartIdx + 1U) << 3U) - StartBit;
            signalinfo->LastInterval = Length - signalinfo->FirstInterval - 16U;
            break;

        case 5:
            signalinfo->FirstInterval = ((signalinfo->StartIdx + 1U) << 3U) - StartBit;
            signalinfo->LastInterval = Length - signalinfo->FirstInterval - 24U;
            break;

        default:
            break;
    }
    return;
}

uint32_t ReadCANData(uint8_t *CAN_Signal, SignalInfo *signalinfo) {
    
    uint32_t ret = 0U;
    uint8_t EndBit = 0;
    uint8_t R_Shift = 8U - signalinfo->FirstInterval;
    uint8_t L_Shift = 8U - signalinfo->LastInterval;

    switch (signalinfo->UsedIdxCount)
    {
        case 1:
            EndBit = signalinfo->StartBitInArr + signalinfo->FirstInterval - 1U;
            ret = ((uint8_t)(CAN_Signal[signalinfo->StartIdx] << (7 - EndBit) ) >> ((7 - EndBit) + signalinfo->StartBitInArr));
            break;
        
        case 2:
            ret = (CAN_Signal[signalinfo->StartIdx] >> R_Shift) |\
                  (((uint8_t)(CAN_Signal[signalinfo->EndIdx] << L_Shift) >> L_Shift) << signalinfo->FirstInterval);
            break;
        
        case 3:
            ret = (CAN_Signal[signalinfo->StartIdx] >> R_Shift) |\
                  (CAN_Signal[signalinfo->StartIdx+1U] << signalinfo->FirstInterval) |\
                  (((uint8_t)(CAN_Signal[signalinfo->EndIdx] << L_Shift) >> L_Shift) << (8U + signalinfo->FirstInterval));
            break;
        
        case 4:
            ret = (CAN_Signal[signalinfo->StartIdx] >> R_Shift) |\
                  (CAN_Signal[signalinfo->StartIdx+1U] << signalinfo->FirstInterval) |\
                  (CAN_Signal[signalinfo->StartIdx+2U] << (signalinfo->FirstInterval + 8U)) |\
                  (((uint8_t)(CAN_Signal[signalinfo->EndIdx] << L_Shift) >> L_Shift) << (16U + signalinfo->FirstInterval));
            break;
        
        case 5:
            ret = (CAN_Signal[signalinfo->StartIdx] >> R_Shift) |\
                  (CAN_Signal[signalinfo->StartIdx+1U] << signalinfo->FirstInterval) |\
                  (CAN_Signal[signalinfo->StartIdx+2U] << (signalinfo->FirstInterval + 8U)) |\
                  (CAN_Signal[signalinfo->StartIdx+3U] << (signalinfo->FirstInterval + 16U)) |\
                  (((uint8_t)(CAN_Signal[signalinfo->EndIdx] << L_Shift) >> L_Shift) << (24U + signalinfo->FirstInterval));
            break;
        
        default:
            break;
    }
    
    return ret;
};

int32_t Unsigned2Signed(uint32_t Signal, uint8_t Length) {
    
    int32_t ret = Signal;

    if(Signal & (0x1 << (Length - 1U))) {
        if (Length <= 8)
            ret = ((int8_t)(Signal & ~(0x1 << (Length - 1U))) | (0xFF << (Length - 1U)));
        else if (Length <= 16)
            ret = ((int16_t)(Signal & ~(0x1 << (Length - 1U))) | (0xFFFF << (Length - 1U)));
        else 
            ret = ((int32_t)(Signal & ~(0x1 << (Length - 1U))) | (0xFFFFFFFF << (Length - 1U)));
    }
    
    return ret;
}

int32_t Unsigned2Signed_int32(uint32_t Signal, uint8_t Length) {
    
    int32_t ret = Signal;

    if(Signal & (0x1 << (Length - 1U))) {
        ret = ((Signal & ~(0x1 << (Length - 1U))) | (0xFFFFFFFF << (Length - 1U)));
    }
    
    return ret;
}

int16_t Unsigned2Signed_int16(uint16_t Signal, uint8_t Length) {
    
    int16_t ret = Signal;

    if(Signal & (0x1 << (Length - 1U))) {
        ret = ((Signal & ~(0x1 << (Length - 1U))) | (0xFFFF << (Length - 1U)));
    }
    
    return ret;
}

int8_t Unsigned2Signed_int8(uint8_t Signal, uint8_t Length) {
    
    int8_t ret = Signal;

    if(Signal & (0x1 << (Length - 1U))) {
        ret = ((Signal & ~(0x1 << (Length - 1U))) | (0xFF << (Length - 1U)));
    }
    
    return ret;
}

void Signal2CAN(uint32_t SignalData, uint8_t *dst, SignalInfo *signalinfo, uint8_t Length, uint8_t StartBit)
{
    SetSignalInfo(signalinfo, Length, StartBit);

    WriteCANData(SignalData, dst, signalinfo);

    return;
}

void WriteCANData(uint32_t SignalData, uint8_t *dst, SignalInfo *signalinfo) {

    uint8_t EndBit = 0U;

    switch (signalinfo->UsedIdxCount)
    {
        case 1:
            EndBit = signalinfo->StartBitInArr + signalinfo->FirstInterval - 1U; // When UsedIdxCount == 1 available    
            dst[signalinfo->StartIdx] = ((uint8_t)(dst[signalinfo->StartIdx] << (8U - signalinfo->StartBitInArr)) >> (8U - signalinfo->StartBitInArr)) |\
                                        ((uint8_t)(dst[signalinfo->StartIdx] >> (EndBit + 1U)) << (EndBit + 1U)) |\
                                        ((uint8_t)(SignalData << (8 - signalinfo->FirstInterval)) >> (8 - signalinfo->FirstInterval) \
                                        << signalinfo->StartBitInArr);
            break;
        
        case 2:
            dst[signalinfo->StartIdx] = ((uint8_t)(dst[signalinfo->StartIdx] << signalinfo->FirstInterval) >> signalinfo->FirstInterval) |\
                                        (uint8_t)(SignalData << signalinfo->StartBitInArr);
            dst[signalinfo->EndIdx] = ((dst[signalinfo->EndIdx] >> signalinfo->LastInterval) << signalinfo->LastInterval) |\
                                      (SignalData >> signalinfo->FirstInterval);
            break;
        
        case 3:
            dst[signalinfo->StartIdx] = ((uint8_t)(dst[signalinfo->StartIdx] << signalinfo->FirstInterval) >> signalinfo->FirstInterval) |\
                                        (uint8_t)(SignalData << signalinfo->StartBitInArr);
            dst[signalinfo->StartIdx + 1U] = (uint8_t)(SignalData >> signalinfo->FirstInterval);
            dst[signalinfo->EndIdx] = ((dst[signalinfo->EndIdx] >> signalinfo->LastInterval) << signalinfo->LastInterval) |\
                                      (SignalData >> signalinfo->FirstInterval);
            break;
        
        case 4:
            dst[signalinfo->StartIdx] = ((uint8_t)(dst[signalinfo->StartIdx] << signalinfo->FirstInterval) >> signalinfo->FirstInterval) |\
                                        (uint8_t)(SignalData << signalinfo->StartBitInArr);
            dst[signalinfo->StartIdx + 1U] = (uint8_t)(SignalData >> signalinfo->FirstInterval);
            dst[signalinfo->StartIdx + 2U] = (uint8_t)(SignalData >> (signalinfo->FirstInterval + 8U));
            dst[signalinfo->EndIdx] = ((dst[signalinfo->EndIdx] >> signalinfo->LastInterval) << signalinfo->LastInterval) |\
                                      (SignalData >> signalinfo->FirstInterval);
            break;
        
        case 5:
            dst[signalinfo->StartIdx] = (uint8_t)(dst[signalinfo->StartIdx] << signalinfo->FirstInterval) >> signalinfo->FirstInterval |\
                                        (uint8_t)(SignalData << signalinfo->StartBitInArr);
            dst[signalinfo->StartIdx + 1U] = (uint8_t)(SignalData >> signalinfo->FirstInterval);
            dst[signalinfo->StartIdx + 2U] = (uint8_t)(SignalData >> (signalinfo->FirstInterval + 8U));
            dst[signalinfo->StartIdx + 3U] = (uint8_t)(SignalData >> (signalinfo->FirstInterval + 16U));
            dst[signalinfo->EndIdx] = (dst[signalinfo->EndIdx] >> signalinfo->LastInterval) << signalinfo->LastInterval |\
                                      (SignalData >> signalinfo->FirstInterval);
            break;
        
        default:
            break;
    }

    return;
}