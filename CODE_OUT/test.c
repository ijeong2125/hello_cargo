#include <stdio.h>
typedef unsigned char uint8_t; 
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t; 
typedef signed short int16_t;
typedef signed int int32_t;

int32_t Unsigned2Signed(uint32_t Signal, uint8_t Length);

int main() {
    signed short a = -300;
    unsigned int b = 0x80000001;
    unsigned int signal = 0x1001;

    printf("before %u\n",signal);
    printf("after %d\n",sizeof((int16_t)Unsigned2Signed(signal,13)));

    return 0;
}

int32_t Unsigned2Signed(uint32_t Signal, uint8_t Length) {
    
    int32_t ret = Signal;

    if(Signal & (0x1 << (Length - 1))) {

        if (Length <= 8) {
            ret = ((int8_t)(Signal & ~(0x1 << (Length - 1))) + (0xFF << (Length - 1)));
        } else if (Length <= 16) {
            ret = ((int16_t)(Signal & ~(0x1 << (Length - 1))) + (0xFFFF << (Length - 1)));
        } else {
            ret = ((int32_t)(Signal & ~(0x1 << (Length - 1))) + (0xFFFFFFFF << (Length - 1)));
        }
    }
    
    return ret;
}