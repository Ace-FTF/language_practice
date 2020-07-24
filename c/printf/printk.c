/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/c/printf/printk.c
 * 创建时间 ：2020/05/12 17:52
 */

#include <stdio.h>
#include <string.h>
#include <linux/kernel.h>

int main(int argc, char *argv[]) {
    int i = 0;

    printk(KERN_DEBUG"sss i = %d\r\n", i);

    return 0;
}

