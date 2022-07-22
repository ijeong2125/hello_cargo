#include "ICSC_BSW_In_Interface.h"
#include "CDCU_msg_Rx_interface.h"

/* Signal Variable Definitions*/

unsigned char ICSC_YRS_01_10ms_IVD;
signed int ICSC_YRS_YawRtVal;                     //Res: 0.01, StartBit: 64, Length: 16
signed char g_LatAccelVal;                        //Res: 0.01, StartBit: 80, Length: 16
float ICSC_YRS_LongAccelVal;                      //Res: 1, StartBit: 96, Length: 16
unsigned short ICSC_YRS_YawSigSta;                //Res: 1, StartBit: 24, Length: 4

unsigned char ICSC_VCU_02_10ms_IVD;
unsigned short ICSC_VCU_MtTqCmdBInvFrnt_pc;       //Res: 1, StartBit: 24, Length: 4

unsigned char ICSC_MCU_01_10ms_IVD;
signed char ICSC_MCU_MtRrEstTq_Nm;                //Res: 0.125, StartBit: 192, Length: 14
signed char ICSC_MCU_MtRrActlRotatSpd_rpm;        //Res: 1, StartBit: 24, Length: 16
unsigned short ICSC_MCU_MtRrMilOnReq;             //Res: 1, StartBit: 168, Length: 2
unsigned int ICSC_MCU_MtRrTqUppLim_Nm;            //Res: 1, StartBit: 238, Length: 16
unsigned short ICSC_MCU_MtRrWrngSta;              //Res: 1, StartBit: 60, Length: 2
unsigned short ICSC_MCU_MtRrFltSta;               //Res: 1, StartBit: 62, Length: 2
unsigned short ICSC_MCU_Mg1InvtCtrlRdySta;        //Res: 1, StartBit: 56, Length: 2
unsigned short ICSC_MCU_Mg1CtrlablSta;            //Res: 1, StartBit: 58, Length: 2

void ICSC_BSW_In_Interface(void)
{
	/* Generated Time: 2021.9.2 8h 25m */
	/* Referenced DB Info: 20191031_NE1_2021_FD-C_19.10.01 */

	unsigned char arr_u8_MessageCpy[32] = { 0 };
	unsigned short u16_SigData = 0;

	ICSC_YRS_01_10ms_IVD = copy_msg(arr_u8_MessageCpy, IDX_YRS_01_10ms_C);

	u16_SigData = (arr_u8_MessageCpy[8]) | ((unsigned short)arr_u8_MessageCpy[9] << 8);
	ICSC_YRS_YawRtVal = (signed int)u16_SigData + -32768;
	ICSC_YRS_YawRtVal = ICSC_YRS_YawRtVal * 50000 / 100000;	//Res: 0.01

	u16_SigData = (arr_u8_MessageCpy[10]) | ((unsigned short)arr_u8_MessageCpy[11] << 8);
	g_LatAccelVal = (signed short)((signed int)u16_SigData + -32768);
	g_LatAccelVal = (signed short)((signed int)g_LatAccelVal * 12746 / 1000000);	//Res: 0.01

	u16_SigData = (arr_u8_MessageCpy[12]) | ((unsigned short)arr_u8_MessageCpy[13] << 8);
	ICSC_YRS_LongAccelVal = (float)((signed int)u16_SigData + -32768) * 0.000127465F;	//Res: 1

	ICSC_YRS_YawSigSta = ((arr_u8_MessageCpy[3]) & 0x0FU);	//Res: 1


	ICSC_VCU_02_10ms_IVD = copy_msg(arr_u8_MessageCpy, IDX_VCU_02_10ms_C);

	ICSC_VCU_MtTqCmdBInvFrnt_pc = ((arr_u8_MessageCpy[3]) & 0x0FU);	//Res: 1


	ICSC_MCU_01_10ms_IVD = copy_msg(arr_u8_MessageCpy, IDX_MCU_01_10ms_C);

	u16_SigData = (((arr_u8_MessageCpy[24]) | ((unsigned short)arr_u8_MessageCpy[25] << 8)) & 0x3FFFU);
	ICSC_MCU_MtRrEstTq_Nm = (signed short)(u16_SigData << 2) >> 2;	//Res: 0.125

	u16_SigData = (arr_u8_MessageCpy[3]) | ((unsigned short)arr_u8_MessageCpy[4] << 8);
	ICSC_MCU_MtRrActlRotatSpd_rpm = (signed short)(u16_SigData);	//Res: 1

	ICSC_MCU_MtRrMilOnReq = ((arr_u8_MessageCpy[21]) & 0x03U);	//Res: 1

	ICSC_MCU_MtRrTqUppLim_Nm = ((unsigned int)arr_u8_MessageCpy[29] >> 6) | ((unsigned int)arr_u8_MessageCpy[30] << 2) | ((unsigned int)(arr_u8_MessageCpy[31] & 0x3FU) << 10);
	ICSC_MCU_MtRrTqUppLim_Nm = ICSC_MCU_MtRrTqUppLim_Nm * 200000U / 100000U;	//Res: 1

	ICSC_MCU_MtRrWrngSta = ((arr_u8_MessageCpy[7] >> 4) & 0x03U);	//Res: 1

	ICSC_MCU_MtRrFltSta = ((arr_u8_MessageCpy[7] >> 6) & 0x03U);	//Res: 1

	ICSC_MCU_Mg1InvtCtrlRdySta = ((arr_u8_MessageCpy[7]) & 0x03U);	//Res: 1

	ICSC_MCU_Mg1CtrlablSta = ((arr_u8_MessageCpy[7] >> 2) & 0x03U);	//Res: 1

	return;
}
