#include <stdio.h>
#include "CAN_Transceiver_header.h"
#include "Transceiver_func_Test.h"

int main() {

    Test_CDCU_01_200ms_Transceiver();
    Test_ICSC_02_100ms_Transceiver();
    Test_CDCU_DTCH_01_10ms_Transceiver();

    // uint8_t uint8 = 0x5C; // 0101 1100
    // printf("unsigned : 0x%X -> %u\n", uint8, uint8);
    // printf("signed : %d\n", Unsigned2Signed_int8(uint8,7));
    
    // uint16_t uint16 = 0x1001; // 0001 0000 0000 0001 
    // printf("unsigned : 0x%X -> %u\n", uint16, uint16);
    // printf("signed : %d\n", Unsigned2Signed_int16(uint16,13));

    // uint32_t uint32 = 0x1401F012; // 0001 0100 0000 0001 1111 0000 0001 0010
    // printf("unsigned : 0x%X -> %u\n", uint32, uint32);
    // printf("signed : %d\n", Unsigned2Signed_int32(uint32,29));

    return 0;
}