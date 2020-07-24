/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/language_practice/c/get_bit/git_bit.c
 * 创建时间 ：2020/06/30 17:01
 */

#include <stdio.h>
#include <string.h>

#define LOW_BITS         8
#define HIGH_BITS_MASK   ((1U << LOW_BITS) - 1)    //此处1U表示无符号整形1，右移8位再减1以后会变成.... 0000 1111 1111

#define GET_HIGH_BITS(data) ((int)((data) >> LOW_BITS))     //注意：获取高位，直接将低位全部右移出去即可，所以此处右移宏为LOW_BITS
#define GET_LOW_BITS(data) ((int)(((data) & HIGH_BITS_MASK) >> LOW_BITS))

int main(int argc, char *argv[]) {
    int a = 0xAA001234;

    printf("low(a) = 0x%x\r\n", GET_LOW_BITS(a));
    printf("high(a) = 0x%x\r\n", GET_HIGH_BITS(a));
    return 0;
}

