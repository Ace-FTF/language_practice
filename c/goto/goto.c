/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/c/goto/goto.c
 * 创建时间 ：2020/05/08 11:45
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i = 0;

    while(i++ < 10) {
        printf("i = %d\r\n", i);

        if (i == 5) {
            goto test_goto1;
        }
    }

test_goto1:
    printf("Now go to test_goto1.\r\n");
test_goto2:
    printf("Now go to test_goto2.\r\n");

    printf("The func will return.\r\n");

    return 0;
}

