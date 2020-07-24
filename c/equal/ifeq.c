/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/c/=/ifeq.c
 * 创建时间 ：2020/05/12 13:27
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int a = 5;
    int b = 6;
    int c = 7;

    c = 8;
    a = b = c;
    printf("a = %d\r\n", a);
    printf("b = %d\r\n", b);
    printf("c = %d\r\n", c);

    return 0;
}

