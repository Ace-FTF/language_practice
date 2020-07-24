
#include "stdio.h"
#include "string.h"

void main(void)
{
    unsigned char buf[10];
    char *p;


    buf[0] = 1;
    buf[1] = 1;
    buf[2] = 1;
    buf[3] = 1;
    buf[4] = 0;
    buf[5] = 255;
    printf("strlen(buf) = %d\r\n", strlen(buf));
    printf("buf_str = %s\r\n", buf);

    p = (char *)buf;
    printf("buf[0] = %d\r\n", buf[0]);
    printf("buf[1] = %d\r\n", buf[1]);
    printf("p0 = %d\r\n", *p);
    printf("p1 = %d\r\n", *(p+1));

}
