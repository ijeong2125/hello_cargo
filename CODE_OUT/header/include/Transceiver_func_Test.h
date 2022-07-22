#include "CAN_Transceiver_header.h"
#include "CDCU_Message.h"
#include "CDCU_Signal_Info.h"

void Parsing_CDCU_01_200ms(CDCU_MESSAGE *cdcu_Message, uint8_t *CAN_Signal, SignalInfo *signalinfo);
void Write_CDCU_01_200ms(CDCU_MESSAGE *cdcu_Message, uint8_t *dst, SignalInfo *signalinfo);
void Parsing_ICSC_02_100ms(CDCU_MESSAGE *cdcu_Message, uint8_t *CAN_Signal, SignalInfo *signalinfo);
void Write_ICSC_02_100ms(CDCU_MESSAGE *cdcu_Message, uint8_t *dst, SignalInfo *signalinfo);
void Parsing_CDCU_DTCH_01_10ms(CDCU_MESSAGE *cdcu_Message, uint8_t *CAN_Signal, SignalInfo *signalinfo);
void Write_CDCU_DTCH_01_10ms(CDCU_MESSAGE *cdcu_Message, uint8_t *dst, SignalInfo *signalinfo);

void Test_CDCU_01_200ms_Transceiver();
void Test_ICSC_02_100ms_Transceiver();
void Test_CDCU_DTCH_01_10ms_Transceiver();