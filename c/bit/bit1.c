





















#include <stdio.h>
#include <string.h>

/*
 * +------+-------------+--------------+--------------+--------------+--------------+--------------+
 * |  位  | bit7 - bit6 |  bit5 - bit4 |     bit3     |     bit2     |     bit1     |     bit0     |
 * +------+-------------+--------------+--------------+--------------+--------------+--------------+
 * | 含义 |    ledNum   |    ledKind   |   reserved   |   led2Stat   |   led1Stat   |   led0Stat   |
 * +------+-------------+--------------+--------------+--------------+--------------+--------------+
 */
typedef union {
    char all;
    struct {
        char led0Stat:1; /* led0状态 */
        char led1Stat:1; /* led1状态 */
        char led2Stat:1; /* led2状态 */
        char :1;         /* 该bit不能使用 */
        char ledKind:2;  /* led种类 */
        char ledNum:2;   /* 当前led个数 */
    } bit;
} Led;

int main(int argc, char *argv[])
{
    Led led;

    printf("sizeof(led) = %ld\r\n", sizeof(led));
    printf("----------------------\r\n");

    led.all = 0;
    printf("led.all = 0x%02x\r\n", led.all);

    led.bit.ledNum   = 3; /* 0b11 */
    led.bit.ledKind  = 2; /* 0b10 */
    led.bit.led2Stat = 0;
    led.bit.led1Stat = 1;
    led.bit.led0Stat = 0;
    printf("led.all = 0x%02hhx\r\n", led.all); /* hhx表示打印的char类型对应的十六进制 */

    return 0;
}

