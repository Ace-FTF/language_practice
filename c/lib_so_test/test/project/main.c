/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/c/lib_so_test/main.c
 * 创建时间 ：2020/05/13 08:50
 */

#include <stdio.h>
#include <string.h>
#include "./lib/caculate.h"

int main(int argc, char *argv[]) {
    int a = 5;
    int b = 8;

    printf("a + b = %d\r\n", add(a, b));
    printf("a - b = %d\r\n", sub(a, b));
    printf("a * b = %d\r\n", mul(a, b));
    printf("a / b = %d\r\n", div(a, b));

    return 0;
}

