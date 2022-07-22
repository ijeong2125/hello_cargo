#ifndef ICSC_MSG_BSW_IN_INTERFACE_H_
#define ICSC_MSG_BSW_IN_INTERFACE_H_

/* Generated Time: 2021.9.2 8h 25m */
/* Referenced DB Info: 20191031_NE1_2021_FD-C_19.10.01 */


extern void ICSC_BSW_In_Interface(void);

extern unsigned char ICSC_YRS_01_10ms_IVD;
extern signed int ICSC_YRS_YawRtVal;
extern signed short g_LatAccelVal;
extern float ICSC_YRS_LongAccelVal;
extern unsigned char ICSC_YRS_YawSigSta;
extern unsigned char ICSC_VCU_02_10ms_IVD;
extern unsigned char ICSC_VCU_MtTqCmdBInvFrnt_pc;
extern unsigned char ICSC_MCU_01_10ms_IVD;
extern signed short ICSC_MCU_MtRrEstTq_Nm;
extern signed short ICSC_MCU_MtRrActlRotatSpd_rpm;
extern unsigned char ICSC_MCU_MtRrMilOnReq;
extern unsigned int ICSC_MCU_MtRrTqUppLim_Nm;
extern unsigned char ICSC_MCU_MtRrWrngSta;
extern unsigned char ICSC_MCU_MtRrFltSta;
extern unsigned char ICSC_MCU_Mg1InvtCtrlRdySta;
extern unsigned char ICSC_MCU_Mg1CtrlablSta;

#define  ICSC_YRS_YawRtVal_IVD                             		(ICSC_YRS_01_10ms_IVD != 0)
#define  ICSC_YRS_YawRtVal_Rxmissing                       		((ICSC_YRS_01_10ms_IVD & 0x01) != 0)
#define  g_LatAccelVal_IVD                                 		(ICSC_YRS_01_10ms_IVD != 0)
#define  g_LatAccelVal_Rxmissing                           		((ICSC_YRS_01_10ms_IVD & 0x01) != 0)
#define  ICSC_YRS_LongAccelVal_IVD                         		(ICSC_YRS_01_10ms_IVD != 0)
#define  ICSC_YRS_LongAccelVal_Rxmissing                   		((ICSC_YRS_01_10ms_IVD & 0x01) != 0)
#define  ICSC_YRS_YawSigSta_IVD                            		(ICSC_YRS_01_10ms_IVD != 0)
#define  ICSC_YRS_YawSigSta_Rxmissing                      		((ICSC_YRS_01_10ms_IVD & 0x01) != 0)
#define  ICSC_VCU_MtTqCmdBInvFrnt_pc_IVD                   		(ICSC_VCU_02_10ms_IVD != 0)
#define  ICSC_VCU_MtTqCmdBInvFrnt_pc_Rxmissing             		((ICSC_VCU_02_10ms_IVD & 0x01) != 0)
#define  ICSC_MCU_MtRrEstTq_Nm_IVD                         		(ICSC_MCU_01_10ms_IVD != 0)
#define  ICSC_MCU_MtRrEstTq_Nm_Rxmissing                   		((ICSC_MCU_01_10ms_IVD & 0x01) != 0)
#define  ICSC_MCU_MtRrActlRotatSpd_rpm_IVD                 		(ICSC_MCU_01_10ms_IVD != 0)
#define  ICSC_MCU_MtRrActlRotatSpd_rpm_Rxmissing           		((ICSC_MCU_01_10ms_IVD & 0x01) != 0)
#define  ICSC_MCU_MtRrMilOnReq_IVD                         		(ICSC_MCU_01_10ms_IVD != 0)
#define  ICSC_MCU_MtRrMilOnReq_Rxmissing                   		((ICSC_MCU_01_10ms_IVD & 0x01) != 0)
#define  ICSC_MCU_MtRrTqUppLim_Nm_IVD                      		(ICSC_MCU_01_10ms_IVD != 0)
#define  ICSC_MCU_MtRrTqUppLim_Nm_Rxmissing                		((ICSC_MCU_01_10ms_IVD & 0x01) != 0)
#define  ICSC_MCU_MtRrWrngSta_IVD                          		(ICSC_MCU_01_10ms_IVD != 0)
#define  ICSC_MCU_MtRrWrngSta_Rxmissing                    		((ICSC_MCU_01_10ms_IVD & 0x01) != 0)
#define  ICSC_MCU_MtRrFltSta_IVD                           		(ICSC_MCU_01_10ms_IVD != 0)
#define  ICSC_MCU_MtRrFltSta_Rxmissing                     		((ICSC_MCU_01_10ms_IVD & 0x01) != 0)
#define  ICSC_MCU_Mg1InvtCtrlRdySta_IVD                    		(ICSC_MCU_01_10ms_IVD != 0)
#define  ICSC_MCU_Mg1InvtCtrlRdySta_Rxmissing              		((ICSC_MCU_01_10ms_IVD & 0x01) != 0)
#define  ICSC_MCU_Mg1CtrlablSta_IVD                        		(ICSC_MCU_01_10ms_IVD != 0)
#define  ICSC_MCU_Mg1CtrlablSta_Rxmissing                  		((ICSC_MCU_01_10ms_IVD & 0x01) != 0)

#endif