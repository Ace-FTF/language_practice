#include <stdio.h>
#include <string.h>

int main(void) {
    char *p = "01";
    char *p1 = "1234567890";


    printf("-------------------------\r\n");
    printf("uchar buf string : %d\r\n", strlen(p)); //2
    printf("uchar buf string : %d\r\n", sizeof(p)); //4
    printf("uchar buf string : %d\r\n", sizeof(p1)); //4
    printf("uchar buf string : %d\r\n", sizeof(*p1)); //

    printf("uchar buf string : %c\r\n", *p);       //0
    printf("uchar buf string : %c\r\n", *(p + 1)); //1



    printf("-------------------------\r\n");

    return 0;
}
