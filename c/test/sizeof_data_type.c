/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/c/test/long_int.c
 * 创建时间 ：2020/04/29 16:04
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("\r\n");

    printf("sizeof(char)      = %ld\r\n", sizeof(char)    );
    printf("sizeof(short)     = %ld\r\n", sizeof(short)   );
    printf("sizeof(int)       = %ld\r\n", sizeof(int)     );
    printf("sizeof(long)      = %ld\r\n", sizeof(long)    );
    printf("sizeof(double)    = %ld\r\n", sizeof(double)  );

    printf("sizeof(long int)  = %ld\r\n", sizeof(long int));
    printf("sizeof(long long) = %ld\r\n", sizeof(long long));

    printf("\r\n");

    return 0;
}

