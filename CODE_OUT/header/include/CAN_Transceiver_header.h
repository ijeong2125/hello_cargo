#ifndef H_CAN_RECEIVER
#define H_CAN_RECEIVER
#include "CDCU_MESSAGE.h"
#include "CDCU_typedef.h"

uint32_t CAN2Signal(uint8_t *CAN_Signal, SignalInfo *signalinfo, uint8_t Length, uint8_t Startbit);
int32_t Signed_CAN2Signal(uint8_t *CAN_Signal, SignalInfo *signalinfo, uint8_t Length, uint8_t Startbit);
void SetSignalInfo(SignalInfo *signalinfo, uint8_t Length, uint8_t StartBit);
uint32_t ReadCANData(uint8_t *CAN_Signal, SignalInfo *signalinfo);
int32_t Unsigned2Signed(uint32_t Signal, uint8_t Length);
int32_t Unsigned2Signed_int32(uint32_t Signal, uint8_t Length);
int16_t Unsigned2Signed_int16(uint16_t Signal, uint8_t Length);
int8_t Unsigned2Signed_int8(uint8_t Signal, uint8_t Length);
void Signal2CAN(uint32_t SignalData, uint8_t *dst, SignalInfo *signalinfo, uint8_t Length, uint8_t StartBit);
void WriteCANData(uint32_t SignalData, uint8_t *dst, SignalInfo *signalinfo);
#endif