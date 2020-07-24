/* 版权声明
 * 功能     ：
 * 作者     ：lsy
 * 文件路径 : /home/lsy/practice/c/getopt/getopt.c
 * 创建时间 ：2020/05/08 15:55
 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int oc;
    int i = 1;

    //opterr = 0; /* 默认值为1，想关闭错误log打印，将该变量设置为0即可 */

    if (argc <= 1) {
        printf("Usage:\r\n");
        printf("    %s [option] [para]\r\n", argv[0]);
        printf("    option can be : -a -l -q -w -o -A\r\n");
    }

    do {
        oc = getopt(argc, argv, "alqwo:A::");
        if(oc == (-1)) {
            break;
        }

        printf("---------------------\r\n");
        printf("times:%d\r\n", i++);
        printf("optarg = %s\r\n", optarg);
        printf("optind = %d\r\n", optind);
        printf("opterr = %d\r\n", opterr);
        printf("optopt = %d\r\n", optopt);

        switch(oc) {
            case 'a':
                printf("System is Android.\r\n");
                break;
            case 'l':
                printf("System is Linux.\r\n");
                break;
            case 'q':
                printf("System is Qnx.\r\n");
                break;
            case 'w':
                printf("System is Windows.\r\n");
                break;
            case 'o':
                printf("System is %s.\r\n", optarg);
                break;
            case 'A':
                printf("All system are : %s.\r\n", optarg);
                break;
            case '?':
                printf("case ? branch : return value is %d\r\n", oc);
                break;
            case ':':
                printf("case : branch : return value is %d\r\n", oc);
                break;
        }

        printf("---------------------\r\n");
    } while(oc != (-1));

    return 0;
}

