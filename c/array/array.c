/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/language_practice/c/array.c
 * 创建时间 ：2020/05/26 14:53
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    float u[7][1] = {1, 2, 3, 4, 5, 6, 7};
    float a[3][1];
    int i = 0;
    int j = 0;


    printf("------------------------\r\n");
    while(i < 7) {
        printf("u[i][j] = %f\r\n", u[i][j]);
        i++;
    }

    printf("------------------------\r\n");
    a[3][1] = u[2][0];
    printf("a[0][0] = %f\r\n", a[3][1]);


    printf("------------------------\r\n");
    return 0;
}

