#ifndef H_CDCU_TYPEDEF
#define H_CDCU_TYPEDEF

typedef unsigned char uint8_t; 
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t; 
typedef signed short int16_t;
typedef signed int int32_t;

struct __SignalInfo__ {
    uint8_t StartIdx;
    uint8_t StartBitInArr; 
    uint8_t EndIdx;
    uint8_t UsedIdxCount;
    uint8_t FirstInterval;
    uint8_t LastInterval;
};

typedef struct __SignalInfo__ SignalInfo;

#endif