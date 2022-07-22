#include <stdio.h>
#include "Transceiver_func_Test.h"

void Parsing_CDCU_01_200ms(CDCU_MESSAGE *cdcu_Message, uint8_t *CAN_Signal, SignalInfo *signalinfo)
{
    cdcu_Message->CDCU_01_200ms.CDCU_Crc1Val = (uint16_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_Crc1Val_Length, CDCU_Crc1Val_Startbit);
    cdcu_Message->CDCU_01_200ms.CDCU_AlvCnt1Val = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_AlvCnt1Val_Length, CDCU_AlvCnt1Val_Startbit);
    cdcu_Message->CDCU_01_200ms.CDCU_Rd_LongGrdntPerc = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_Rd_LongGrdntPerc_Length, CDCU_Rd_LongGrdntPerc_Startbit);
    cdcu_Message->CDCU_01_200ms.CDCU_Rd_LatGrdntPerc = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_Rd_LatGrdntPerc_Length, CDCU_Rd_LatGrdntPerc_Startbit);
    cdcu_Message->CDCU_01_200ms.CDCU_CPE_Sta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_CPE_Sta_Length, CDCU_CPE_Sta_Startbit);
    cdcu_Message->CDCU_01_200ms.CDCU_CPE_CpOffsetPC = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_CPE_CpOffsetPC_Length, CDCU_CPE_CpOffsetPC_Startbit);
    cdcu_Message->CDCU_01_200ms.CDCU_CPE_CpOffset = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_CPE_CpOffset_Length, CDCU_CPE_CpOffset_Startbit);
    cdcu_Message->CDCU_01_200ms.CDCU_BJDSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_BJDSta_Length, CDCU_BJDSta_Startbit);

    return;
}

void Write_CDCU_01_200ms(CDCU_MESSAGE *cdcu_Message, uint8_t *dst, SignalInfo *signalinfo) {
    
    Signal2CAN(cdcu_Message->CDCU_01_200ms.CDCU_Crc1Val, dst, signalinfo, CDCU_Crc1Val_Length, CDCU_Crc1Val_Startbit);
    Signal2CAN(cdcu_Message->CDCU_01_200ms.CDCU_AlvCnt1Val, dst, signalinfo, CDCU_AlvCnt1Val_Length, CDCU_AlvCnt1Val_Startbit);
    Signal2CAN(cdcu_Message->CDCU_01_200ms.CDCU_Rd_LongGrdntPerc, dst, signalinfo, CDCU_Rd_LongGrdntPerc_Length, CDCU_Rd_LongGrdntPerc_Startbit);
    Signal2CAN(cdcu_Message->CDCU_01_200ms.CDCU_Rd_LatGrdntPerc, dst, signalinfo, CDCU_Rd_LatGrdntPerc_Length, CDCU_Rd_LatGrdntPerc_Startbit);
    Signal2CAN(cdcu_Message->CDCU_01_200ms.CDCU_CPE_Sta, dst, signalinfo, CDCU_CPE_Sta_Length, CDCU_CPE_Sta_Startbit);
    Signal2CAN(cdcu_Message->CDCU_01_200ms.CDCU_CPE_CpOffsetPC, dst, signalinfo, CDCU_CPE_CpOffsetPC_Length, CDCU_CPE_CpOffsetPC_Startbit);
    Signal2CAN(cdcu_Message->CDCU_01_200ms.CDCU_CPE_CpOffset, dst, signalinfo, CDCU_CPE_CpOffset_Length, CDCU_CPE_CpOffset_Startbit);
    Signal2CAN(cdcu_Message->CDCU_01_200ms.CDCU_BJDSta, dst, signalinfo, CDCU_BJDSta_Length, CDCU_BJDSta_Startbit);

    return;
}

void Parsing_ICSC_02_100ms(CDCU_MESSAGE *cdcu_Message, uint8_t *CAN_Signal, SignalInfo *signalinfo) {
    cdcu_Message->ICSC_02_100ms.ICSC_Crc2Val = (uint16_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_ICSC_Crc2Val_Length, CDCU_ICSC_Crc2Val_StartBit);
    cdcu_Message->ICSC_02_100ms.ICSC_AlvCnt2Val = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_ICSC_AlvCnt2Val_Length, CDCU_ICSC_AlvCnt2Val_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_DrvModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_DrvModSta_Length, CDCU_DMIC_DrvModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_SmtShftModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_SmtShftModSta_Length, CDCU_DMIC_SmtShftModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_EngModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_EngModSta_Length, CDCU_DMIC_EngModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndEngModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndEngModSta_Length, CDCU_DMIC_IndEngModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_TmModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_TmModSta_Length, CDCU_DMIC_TmModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndTmModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndTmModSta_Length, CDCU_DMIC_IndTmModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_EscModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_EscModSta_Length, CDCU_DMIC_EscModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndEscModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndEscModSta_Length, CDCU_DMIC_IndEscModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_MdpsModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_MdpsModSta_Length, CDCU_DMIC_MdpsModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndMdpsModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndMdpsModSta_Length, CDCU_DMIC_IndMdpsModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_EcsModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_EcsModSta_Length, CDCU_DMIC_EcsModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndEcsModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndEcsModSta_Length, CDCU_DMIC_IndEcsModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_AwdModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_AwdModSta_Length, CDCU_DMIC_AwdModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndAwdModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndAwdModSta_Length, CDCU_DMIC_IndAwdModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_RevModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_RevModSta_Length, CDCU_DMIC_RevModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndRevModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndRevModSta_Length, CDCU_DMIC_IndRevModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_PrflModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_PrflModSta_Length, CDCU_DMIC_PrflModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndPrflModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndPrflModSta_Length, CDCU_DMIC_IndPrflModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_ElsdModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_ElsdModSta_Length, CDCU_DMIC_ElsdModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndElsdModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndElsdModSta_Length, CDCU_DMIC_IndElsdModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_EsndModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_EsndModSta_Length, CDCU_DMIC_EsndModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndEsndModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndEsndModSta_Length, CDCU_DMIC_IndEsndModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_RwsModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_RwsModSta_Length, CDCU_DMIC_RwsModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndRwsModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndRwsModSta_Length, CDCU_DMIC_IndRwsModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_VcuModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_VcuModSta_Length, CDCU_DMIC_VcuModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndVcuModSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndVcuModSta_Length, CDCU_DMIC_IndVcuModSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_DrvModFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_DrvModFltSta_Length, CDCU_DMIC_DrvModFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_DrvModTyp = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_DrvModTyp_Length, CDCU_DMIC_DrvModTyp_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_EngFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_EngFltSta_Length, CDCU_DMIC_EngFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_TmFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_TmFltSta_Length, CDCU_DMIC_TmFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_EscFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_EscFltSta_Length, CDCU_DMIC_EscFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_MdpsFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_MdpsFltSta_Length, CDCU_DMIC_MdpsFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_EcsFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_EcsFltSta_Length, CDCU_DMIC_EcsFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_AwdFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_AwdFltSta_Length, CDCU_DMIC_AwdFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_RevFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_RevFltSta_Length, CDCU_DMIC_RevFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_PrflFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_PrflFltSta_Length, CDCU_DMIC_PrflFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_ElsdFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_ElsdFltSta_Length, CDCU_DMIC_ElsdFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_EsndFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_EsndFltSta_Length, CDCU_DMIC_EsndFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_RwsFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_RwsFltSta_Length, CDCU_DMIC_RwsFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndWhlDrvSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndWhlDrvSta_Length, CDCU_DMIC_IndWhlDrvSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_VcuFltSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_VcuFltSta_Length, CDCU_DMIC_VcuFltSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndMtrPwrSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndMtrPwrSta_Length, CDCU_DMIC_IndMtrPwrSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndAccSenSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndAccSenSta_Length, CDCU_DMIC_IndAccSenSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndDecSenSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndDecSenSta_Length, CDCU_DMIC_IndDecSenSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_IndMaxVehSpdSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_IndMaxVehSpdSta_Length, CDCU_DMIC_IndMaxVehSpdSta_StartBit);
    cdcu_Message->ICSC_02_100ms.DMIC_DrvMod2Typ = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DMIC_DrvMod2Typ_Length, CDCU_DMIC_DrvMod2Typ_StartBit);
    return;
}

void Write_ICSC_02_100ms(CDCU_MESSAGE *cdcu_Message, uint8_t *dst, SignalInfo *signalinfo) {
    Signal2CAN(cdcu_Message->ICSC_02_100ms.ICSC_Crc2Val, dst, signalinfo, CDCU_ICSC_Crc2Val_Length, CDCU_ICSC_Crc2Val_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.ICSC_AlvCnt2Val, dst, signalinfo, CDCU_ICSC_AlvCnt2Val_Length, CDCU_ICSC_AlvCnt2Val_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_DrvModSta, dst, signalinfo, CDCU_DMIC_DrvModSta_Length, CDCU_DMIC_DrvModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_SmtShftModSta, dst, signalinfo, CDCU_DMIC_SmtShftModSta_Length, CDCU_DMIC_SmtShftModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_EngModSta, dst, signalinfo, CDCU_DMIC_EngModSta_Length, CDCU_DMIC_EngModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndEngModSta, dst, signalinfo, CDCU_DMIC_IndEngModSta_Length, CDCU_DMIC_IndEngModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_TmModSta, dst, signalinfo, CDCU_DMIC_TmModSta_Length, CDCU_DMIC_TmModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndTmModSta, dst, signalinfo, CDCU_DMIC_IndTmModSta_Length, CDCU_DMIC_IndTmModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_EscModSta, dst, signalinfo, CDCU_DMIC_EscModSta_Length, CDCU_DMIC_EscModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndEscModSta, dst, signalinfo, CDCU_DMIC_IndEscModSta_Length, CDCU_DMIC_IndEscModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_MdpsModSta, dst, signalinfo, CDCU_DMIC_MdpsModSta_Length, CDCU_DMIC_MdpsModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndMdpsModSta, dst, signalinfo, CDCU_DMIC_IndMdpsModSta_Length, CDCU_DMIC_IndMdpsModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_EcsModSta, dst, signalinfo, CDCU_DMIC_EcsModSta_Length, CDCU_DMIC_EcsModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndEcsModSta, dst, signalinfo, CDCU_DMIC_IndEcsModSta_Length, CDCU_DMIC_IndEcsModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_AwdModSta, dst, signalinfo, CDCU_DMIC_AwdModSta_Length, CDCU_DMIC_AwdModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndAwdModSta, dst, signalinfo, CDCU_DMIC_IndAwdModSta_Length, CDCU_DMIC_IndAwdModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_RevModSta, dst, signalinfo, CDCU_DMIC_RevModSta_Length, CDCU_DMIC_RevModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndRevModSta, dst, signalinfo, CDCU_DMIC_IndRevModSta_Length, CDCU_DMIC_IndRevModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_PrflModSta, dst, signalinfo, CDCU_DMIC_PrflModSta_Length, CDCU_DMIC_PrflModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndPrflModSta, dst, signalinfo, CDCU_DMIC_IndPrflModSta_Length, CDCU_DMIC_IndPrflModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_ElsdModSta, dst, signalinfo, CDCU_DMIC_ElsdModSta_Length, CDCU_DMIC_ElsdModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndElsdModSta, dst, signalinfo, CDCU_DMIC_IndElsdModSta_Length, CDCU_DMIC_IndElsdModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_EsndModSta, dst, signalinfo, CDCU_DMIC_EsndModSta_Length, CDCU_DMIC_EsndModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndEsndModSta, dst, signalinfo, CDCU_DMIC_IndEsndModSta_Length, CDCU_DMIC_IndEsndModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_RwsModSta, dst, signalinfo, CDCU_DMIC_RwsModSta_Length, CDCU_DMIC_RwsModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndRwsModSta, dst, signalinfo, CDCU_DMIC_IndRwsModSta_Length, CDCU_DMIC_IndRwsModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_VcuModSta, dst, signalinfo, CDCU_DMIC_VcuModSta_Length, CDCU_DMIC_VcuModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndVcuModSta, dst, signalinfo, CDCU_DMIC_IndVcuModSta_Length, CDCU_DMIC_IndVcuModSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_DrvModFltSta, dst, signalinfo, CDCU_DMIC_DrvModFltSta_Length, CDCU_DMIC_DrvModFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_DrvModTyp, dst, signalinfo, CDCU_DMIC_DrvModTyp_Length, CDCU_DMIC_DrvModTyp_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_EngFltSta, dst, signalinfo, CDCU_DMIC_EngFltSta_Length, CDCU_DMIC_EngFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_TmFltSta, dst, signalinfo, CDCU_DMIC_TmFltSta_Length, CDCU_DMIC_TmFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_EscFltSta, dst, signalinfo, CDCU_DMIC_EscFltSta_Length, CDCU_DMIC_EscFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_MdpsFltSta, dst, signalinfo, CDCU_DMIC_MdpsFltSta_Length, CDCU_DMIC_MdpsFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_EcsFltSta, dst, signalinfo, CDCU_DMIC_EcsFltSta_Length, CDCU_DMIC_EcsFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_AwdFltSta, dst, signalinfo, CDCU_DMIC_AwdFltSta_Length, CDCU_DMIC_AwdFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_RevFltSta, dst, signalinfo, CDCU_DMIC_RevFltSta_Length, CDCU_DMIC_RevFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_PrflFltSta, dst, signalinfo, CDCU_DMIC_PrflFltSta_Length, CDCU_DMIC_PrflFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_ElsdFltSta, dst, signalinfo, CDCU_DMIC_ElsdFltSta_Length, CDCU_DMIC_ElsdFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_EsndFltSta, dst, signalinfo, CDCU_DMIC_EsndFltSta_Length, CDCU_DMIC_EsndFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_RwsFltSta, dst, signalinfo, CDCU_DMIC_RwsFltSta_Length, CDCU_DMIC_RwsFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndWhlDrvSta, dst, signalinfo, CDCU_DMIC_IndWhlDrvSta_Length, CDCU_DMIC_IndWhlDrvSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_VcuFltSta, dst, signalinfo, CDCU_DMIC_VcuFltSta_Length, CDCU_DMIC_VcuFltSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndMtrPwrSta, dst, signalinfo, CDCU_DMIC_IndMtrPwrSta_Length, CDCU_DMIC_IndMtrPwrSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndAccSenSta, dst, signalinfo, CDCU_DMIC_IndAccSenSta_Length, CDCU_DMIC_IndAccSenSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndDecSenSta, dst, signalinfo, CDCU_DMIC_IndDecSenSta_Length, CDCU_DMIC_IndDecSenSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_IndMaxVehSpdSta, dst, signalinfo, CDCU_DMIC_IndMaxVehSpdSta_Length, CDCU_DMIC_IndMaxVehSpdSta_StartBit);
    Signal2CAN(cdcu_Message->ICSC_02_100ms.DMIC_DrvMod2Typ, dst, signalinfo, CDCU_DMIC_DrvMod2Typ_Length, CDCU_DMIC_DrvMod2Typ_StartBit);
    return;
}

void Parsing_CDCU_DTCH_01_10ms(CDCU_MESSAGE *cdcu_Message, uint8_t *CAN_Signal, SignalInfo *signalinfo)
{
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_Crc1Val = (uint16_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_Crc1Val_Length, CDCU_DTCH_Crc1Val_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_AlvCnt1Val = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_AlvCnt1Val_Length, CDCU_DTCH_AlvCnt1Val_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_OvrStrChrctrIndex = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_OvrStrChrctrIndex_Length, CDCU_DTCH_OvrStrChrctrIndex_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_UdrStrChrctrIndex = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_UdrStrChrctrIndex_Length, CDCU_DTCH_UdrStrChrctrIndex_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_CoRdFr = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_CoRdFr_Length, CDCU_DTCH_CoRdFr_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_RefDesYr = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_RefDesYr_Length, CDCU_DTCH_RefDesYr_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TqTarReqFrnt = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_TqTarReqFrnt_Length, CDCU_DTCH_TqTarReqFrnt_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TqTarReqRear = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_TqTarReqRear_Length, CDCU_DTCH_TqTarReqRear_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_DfctvSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_DfctvSta_Length, CDCU_DTCH_DfctvSta_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_ActvSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_ActvSta_Length, CDCU_DTCH_ActvSta_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_CorneringFlag = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_CorneringFlag_Length, CDCU_DTCH_CorneringFlag_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_McuAntiJerkInhRearSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_McuAntiJerkInhRearSta_Length, CDCU_DTCH_McuAntiJerkInhRearSta_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_McuAntiJerkInhFrntSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_McuAntiJerkInhFrntSta_Length, CDCU_DTCH_McuAntiJerkInhFrntSta_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_SysAppSta = (uint8_t)CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_SysAppSta_Length, CDCU_DTCH_SysAppSta_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforSlip = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_TarTqCtrlforSlip_Length, CDCU_DTCH_TarTqCtrlforSlip_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforPre = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_TarTqCtrlforPre_Length, CDCU_DTCH_TarTqCtrlforPre_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforUndrStr = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_TarTqCtrlforUndrStr_Length, CDCU_DTCH_TarTqCtrlforUndrStr_StartBit);
    cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlPwOff = (int16_t)Signed_CAN2Signal(CAN_Signal, signalinfo, CDCU_DTCH_TarTqCtrlPwOff_Length, CDCU_DTCH_TarTqCtrlPwOff_StartBit);

    return;
}

void Write_CDCU_DTCH_01_10ms(CDCU_MESSAGE *cdcu_Message, uint8_t *dst, SignalInfo *signalinfo) {
    
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_Crc1Val, dst, signalinfo, CDCU_DTCH_Crc1Val_Length, CDCU_DTCH_Crc1Val_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_AlvCnt1Val, dst, signalinfo, CDCU_DTCH_AlvCnt1Val_Length, CDCU_DTCH_AlvCnt1Val_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_OvrStrChrctrIndex, dst, signalinfo, CDCU_DTCH_OvrStrChrctrIndex_Length, CDCU_DTCH_OvrStrChrctrIndex_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_UdrStrChrctrIndex, dst, signalinfo, CDCU_DTCH_UdrStrChrctrIndex_Length, CDCU_DTCH_UdrStrChrctrIndex_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_CoRdFr, dst, signalinfo, CDCU_DTCH_CoRdFr_Length, CDCU_DTCH_CoRdFr_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_RefDesYr, dst, signalinfo, CDCU_DTCH_RefDesYr_Length, CDCU_DTCH_RefDesYr_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TqTarReqFrnt, dst, signalinfo, CDCU_DTCH_TqTarReqFrnt_Length, CDCU_DTCH_TqTarReqFrnt_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TqTarReqRear, dst, signalinfo, CDCU_DTCH_TqTarReqRear_Length, CDCU_DTCH_TqTarReqRear_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_DfctvSta, dst, signalinfo, CDCU_DTCH_DfctvSta_Length, CDCU_DTCH_DfctvSta_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_ActvSta, dst, signalinfo, CDCU_DTCH_ActvSta_Length, CDCU_DTCH_ActvSta_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_CorneringFlag, dst, signalinfo, CDCU_DTCH_CorneringFlag_Length, CDCU_DTCH_CorneringFlag_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_McuAntiJerkInhRearSta, dst, signalinfo, CDCU_DTCH_McuAntiJerkInhRearSta_Length, CDCU_DTCH_McuAntiJerkInhRearSta_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_McuAntiJerkInhFrntSta, dst, signalinfo, CDCU_DTCH_McuAntiJerkInhFrntSta_Length, CDCU_DTCH_McuAntiJerkInhFrntSta_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_SysAppSta, dst, signalinfo, CDCU_DTCH_SysAppSta_Length, CDCU_DTCH_SysAppSta_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforSlip, dst, signalinfo, CDCU_DTCH_TarTqCtrlforSlip_Length, CDCU_DTCH_TarTqCtrlforSlip_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforPre, dst, signalinfo, CDCU_DTCH_TarTqCtrlforPre_Length, CDCU_DTCH_TarTqCtrlforPre_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforUndrStr, dst, signalinfo, CDCU_DTCH_TarTqCtrlforUndrStr_Length, CDCU_DTCH_TarTqCtrlforUndrStr_StartBit);
    Signal2CAN(cdcu_Message->CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlPwOff, dst, signalinfo, CDCU_DTCH_TarTqCtrlPwOff_Length, CDCU_DTCH_TarTqCtrlPwOff_StartBit);

    return;
}

void Test_CDCU_01_200ms_Transceiver() {
    uint8_t var_C_Tx_CDCU_ARD_01_200ms[32] = {0};
    SignalInfo signalinfo = { 0,0,0,0,0,0 };
    CDCU_MESSAGE Transmitted_Data;
    CDCU_MESSAGE Received_Data;

    Transmitted_Data.CDCU_01_200ms.CDCU_Crc1Val = 1008;
    Transmitted_Data.CDCU_01_200ms.CDCU_AlvCnt1Val = 36;
    Transmitted_Data.CDCU_01_200ms.CDCU_Rd_LongGrdntPerc = 255;
    Transmitted_Data.CDCU_01_200ms.CDCU_Rd_LatGrdntPerc = 16;
    Transmitted_Data.CDCU_01_200ms.CDCU_CPE_Sta = 182; // == 0b10110110
    Transmitted_Data.CDCU_01_200ms.CDCU_CPE_CpOffsetPC = 219;
    Transmitted_Data.CDCU_01_200ms.CDCU_CPE_CpOffset = 0x8F; // == 0b10001111
    Transmitted_Data.CDCU_01_200ms.CDCU_BJDSta = 3;

    Write_CDCU_01_200ms(&Transmitted_Data, var_C_Tx_CDCU_ARD_01_200ms, &signalinfo);
    Parsing_CDCU_01_200ms(&Received_Data, var_C_Tx_CDCU_ARD_01_200ms, &signalinfo);

    printf("Received CDCU_Crc1Val : %u\n", Received_Data.CDCU_01_200ms.CDCU_Crc1Val);
    printf("Received CDCU_AlvCnt1Val : %u\n", Received_Data.CDCU_01_200ms.CDCU_AlvCnt1Val);
    printf("Received CDCU_Rd_LongGrdntPerc : %u\n", Received_Data.CDCU_01_200ms.CDCU_Rd_LongGrdntPerc);
    printf("Received CDCU_Rd_LatGrdntPerc : %u\n", Received_Data.CDCU_01_200ms.CDCU_Rd_LatGrdntPerc);
    printf("Received CDCU_CPE_Sta : %u\n", Received_Data.CDCU_01_200ms.CDCU_CPE_Sta);
    printf("Received CDCU_CPE_CpOffsetPC : %u\n", Received_Data.CDCU_01_200ms.CDCU_CPE_CpOffsetPC);
    printf("Received CDCU_CPE_CpOffset : %u\n", Received_Data.CDCU_01_200ms.CDCU_CPE_CpOffset);
    printf("Received CDCU_BJDSta : %u\n", Received_Data.CDCU_01_200ms.CDCU_BJDSta);

    return;
}

void Test_ICSC_02_100ms_Transceiver() {

    uint8_t var_C_H_Tx_ICSC_02_100ms[32] = {0};
    SignalInfo signalinfo = { 0,0,0,0,0,0 };
    CDCU_MESSAGE Transmitted_Data;
    CDCU_MESSAGE Received_Data;

    Transmitted_Data.ICSC_02_100ms.ICSC_Crc2Val = 0xFFFF ;
    Transmitted_Data.ICSC_02_100ms.ICSC_AlvCnt2Val = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_DrvModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_SmtShftModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_EngModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndEngModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_TmModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndTmModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_EscModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndEscModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_MdpsModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndMdpsModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_EcsModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndEcsModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_AwdModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndAwdModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_RevModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndRevModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_PrflModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndPrflModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_ElsdModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndElsdModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_EsndModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndEsndModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_RwsModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndRwsModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_VcuModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndVcuModSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_DrvModFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_DrvModTyp = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_EngFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_TmFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_EscFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_MdpsFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_EcsFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_AwdFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_RevFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_PrflFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_ElsdFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_EsndFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_RwsFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndWhlDrvSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_VcuFltSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndMtrPwrSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndAccSenSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndDecSenSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_IndMaxVehSpdSta = 0xFF ;
    Transmitted_Data.ICSC_02_100ms.DMIC_DrvMod2Typ = 0xFF ;

    Write_ICSC_02_100ms(&Transmitted_Data, var_C_H_Tx_ICSC_02_100ms, &signalinfo);
    Parsing_ICSC_02_100ms(&Received_Data, var_C_H_Tx_ICSC_02_100ms, &signalinfo);

    printf("Received ICSC_Crc2Val : %u\n",Received_Data.ICSC_02_100ms.ICSC_Crc2Val);
    printf("Received ICSC_AlvCnt2Val : %u\n",Received_Data.ICSC_02_100ms.ICSC_AlvCnt2Val);
    printf("Received DMIC_DrvModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_DrvModSta);
    printf("Received DMIC_SmtShftModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_SmtShftModSta);
    printf("Received DMIC_EngModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_EngModSta);
    printf("Received DMIC_IndEngModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndEngModSta);
    printf("Received DMIC_TmModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_TmModSta);
    printf("Received DMIC_IndTmModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndTmModSta);
    printf("Received DMIC_EscModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_EscModSta);
    printf("Received DMIC_IndEscModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndEscModSta);
    printf("Received DMIC_MdpsModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_MdpsModSta);
    printf("Received DMIC_IndMdpsModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndMdpsModSta);
    printf("Received DMIC_EcsModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_EcsModSta);
    printf("Received DMIC_IndEcsModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndEcsModSta);
    printf("Received DMIC_AwdModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_AwdModSta);
    printf("Received DMIC_IndAwdModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndAwdModSta);
    printf("Received DMIC_RevModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_RevModSta);
    printf("Received DMIC_IndRevModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndRevModSta);
    printf("Received DMIC_PrflModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_PrflModSta);
    printf("Received DMIC_IndPrflModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndPrflModSta);
    printf("Received DMIC_ElsdModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_ElsdModSta);
    printf("Received DMIC_IndElsdModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndElsdModSta);
    printf("Received DMIC_EsndModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_EsndModSta);
    printf("Received DMIC_IndEsndModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndEsndModSta);
    printf("Received DMIC_RwsModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_RwsModSta);
    printf("Received DMIC_IndRwsModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndRwsModSta);
    printf("Received DMIC_VcuModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_VcuModSta);
    printf("Received DMIC_IndVcuModSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndVcuModSta);
    printf("Received DMIC_DrvModFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_DrvModFltSta);
    printf("Received DMIC_DrvModTyp : %u\n",Received_Data.ICSC_02_100ms.DMIC_DrvModTyp);
    printf("Received DMIC_EngFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_EngFltSta);
    printf("Received DMIC_TmFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_TmFltSta);
    printf("Received DMIC_EscFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_EscFltSta);
    printf("Received DMIC_MdpsFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_MdpsFltSta);
    printf("Received DMIC_EcsFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_EcsFltSta);
    printf("Received DMIC_AwdFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_AwdFltSta);
    printf("Received DMIC_RevFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_RevFltSta);
    printf("Received DMIC_PrflFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_PrflFltSta);
    printf("Received DMIC_ElsdFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_ElsdFltSta);
    printf("Received DMIC_EsndFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_EsndFltSta);
    printf("Received DMIC_RwsFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_RwsFltSta);
    printf("Received DMIC_IndWhlDrvSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndWhlDrvSta);
    printf("Received DMIC_VcuFltSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_VcuFltSta);
    printf("Received DMIC_IndMtrPwrSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndMtrPwrSta);
    printf("Received DMIC_IndAccSenSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndAccSenSta);
    printf("Received DMIC_IndDecSenSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndDecSenSta);
    printf("Received DMIC_IndMaxVehSpdSta : %u\n",Received_Data.ICSC_02_100ms.DMIC_IndMaxVehSpdSta);
    printf("Received DMIC_DrvMod2Typ : %u\n",Received_Data.ICSC_02_100ms.DMIC_DrvMod2Typ);
}

void Test_CDCU_DTCH_01_10ms_Transceiver() {
    uint8_t var_C_Tx_CDCU_DTCH_01_10ms[32] = {0};
    SignalInfo signalinfo = { 0,0,0,0,0,0 };
    CDCU_MESSAGE Transmitted_Data;
    CDCU_MESSAGE Received_Data;

    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_Crc1Val = 1008;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_AlvCnt1Val = 36;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_OvrStrChrctrIndex = 0x9001; // == 0b1001000000000001
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_UdrStrChrctrIndex = 0xA0F2; // == 0b1010000011110010
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_CoRdFr = 182; // == 0b10110110
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_RefDesYr = 0x70B3;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TqTarReqFrnt = 0x8001; // == 0b1000000000000001
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TqTarReqRear = 0xC123; // == 0b1100000100100011
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_DfctvSta = 3;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_ActvSta = 255;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_CorneringFlag = 0;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_McuAntiJerkInhRearSta = 213;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_McuAntiJerkInhFrntSta = 122;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_SysAppSta = 3;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforSlip = 0x1234;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforPre = 0x4321;
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforUndrStr = 0xFFFF; // == 0b1111111111111111
    Transmitted_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlPwOff = 0x0001;

    Write_CDCU_DTCH_01_10ms(&Transmitted_Data, var_C_Tx_CDCU_DTCH_01_10ms, &signalinfo);
    Parsing_CDCU_DTCH_01_10ms(&Received_Data, var_C_Tx_CDCU_DTCH_01_10ms, &signalinfo);

    printf("Received CDCU_DTCH_Crc1Val : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_Crc1Val);
    printf("Received CDCU_DTCH_AlvCnt1Val : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_AlvCnt1Val);
    printf("Received CDCU_DTCH_OvrStrChrctrIndex : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_OvrStrChrctrIndex);
    printf("Received CDCU_DTCH_UdrStrChrctrIndex : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_UdrStrChrctrIndex);
    printf("Received CDCU_DTCH_CoRdFr : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_CoRdFr);
    printf("Received CDCU_DTCH_RefDesYr : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_RefDesYr);
    printf("Received CDCU_DTCH_TqTarReqFrnt : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TqTarReqFrnt);
    printf("Received CDCU_DTCH_TqTarReqRear : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TqTarReqRear);
    printf("Received CDCU_DTCH_DfctvSta : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_DfctvSta);
    printf("Received CDCU_DTCH_ActvSta : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_ActvSta);
    printf("Received CDCU_DTCH_CorneringFlag : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_CorneringFlag);
    printf("Received CDCU_DTCH_McuAntiJerkInhRearSta : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_McuAntiJerkInhRearSta);
    printf("Received CDCU_DTCH_McuAntiJerkInhFrntSta : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_McuAntiJerkInhFrntSta);
    printf("Received CDCU_DTCH_SysAppSta : %u\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_SysAppSta);
    printf("Received CDCU_DTCH_TarTqCtrlforSlip : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforSlip);
    printf("Received CDCU_DTCH_TarTqCtrlforPre : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforPre);
    printf("Received CDCU_DTCH_TarTqCtrlforUndrStr : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlforUndrStr);
    printf("Received CDCU_DTCH_TarTqCtrlPwOff : %d\n", Received_Data.CDCU_DTCH_01_10ms.CDCU_DTCH_TarTqCtrlPwOff);

    return;
}