/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/c/string_functions/strtol.c
 * 创建时间 ：2020/05/13 02:28
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30] = "num is 2030300 This is test";
    char *ptr;
    long ret;

    ret = strtol(str, &ptr, 10);
    printf("数字（无符号长整数）是 %ld\r\n", ret);
    printf("字符串部分是 |%s|\r\n", ptr);

    return(0);
}
