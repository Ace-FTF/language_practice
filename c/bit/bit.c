#include <stdio.h>
#include <string.h>
#include <inttypes.h>

typedef union {
    uint32_t all;  //all为32位，整形
    struct {
        uint32_t bit0:1;
        uint32_t bit1:1;
        uint32_t bit2:1;
        uint32_t bit3:1;
        uint32_t bit4:1;
        uint32_t bit5:1;
        uint32_t bit6:1;
        uint32_t bit7:1;
        uint32_t bit8:1;
        uint32_t bit9:1;
        uint32_t bit10:1;
        uint32_t bit11:1;
        uint32_t bit12:1;
        uint32_t bit13:1;
        uint32_t bit14:1;
        uint32_t bit15:1;
        uint32_t bit16:1;
        uint32_t bit17:1;
        uint32_t bit18:1;
        uint32_t bit19:1;
        uint32_t bit20:1;
        uint32_t bit21:1;
        uint32_t bit22:1;
        uint32_t bit23:1;
        uint32_t bit24:1;
        uint32_t bit25:1;
        uint32_t bit26:1;
        uint32_t bit27:1;
        uint32_t bit28:1;
        uint32_t bit29:1;
        uint32_t bit30:1;
        uint32_t bit31:1;
    } bit;
} REG32_VALUE;

int main(int argc, char *argv[])
{
    REG32_VALUE reg;

    /* 1. 按位赋值 */
    printf("---------------------\r\n");
    reg.all = 0;
    printf("reg value = %d\r\n", reg.all);
    reg.bit.bit7 = 1;
    reg.bit.bit6 = 0;
    reg.bit.bit5 = 1;
    reg.bit.bit4 = 0;
    reg.bit.bit3 = 1;
    reg.bit.bit2 = 0;
    reg.bit.bit1 = 1;
    reg.bit.bit0 = 0;
    printf("reg value = %d\r\n", reg.all);

    /* 2. 移位赋值 */
    printf("---------------------\r\n");
    reg.all = 0;
    reg.all = reg.all | (1 << 3);
    printf("reg value = %d\r\n", reg.all);

    /* 3. 直接赋值 */
    printf("---------------------\r\n");
    reg.all = 0x55;
    printf("reg value = %d\r\n", reg.all);

    return 0;
}

