#include <stdio.h>
#include <string.h>

int main(void) {
    unsigned char uBuf[200];
    char buf[400];
    int i;

    memset(uBuf, 0, sizeof(uBuf));
    memset(buf, 0, sizeof(buf));

    uBuf[0] = 30;
    uBuf[1] = 31;
    uBuf[4] = 32;
    uBuf[5] = 0;
    uBuf[6] = 7;
    uBuf[7] = 7;
    uBuf[8] = 0;
    uBuf[9] = 15;
    uBuf[10] = 15;
    uBuf[11] = 15;
    uBuf[12] = 15;

    for (i = 0; i < sizeof(uBuf); i++) {
        sprintf(buf + 2 * i, "%x", uBuf[i]);
    }

    printf("-------------------------\r\n");
    printf("x : %x\r\n", buf[0]);
    printf("xs : %s\r\n", (char *)buf[0]);

    printf("-------------------------\r\n");
    printf("uchar buf string : %s\r\n", buf);

    printf("-------------------------\r\n");
    printf("uchar buf len = %d\r\n", strlen((char *)uBuf));
    printf("buf len = %d\r\n", strlen(buf));

    printf("-------------------------\r\n");
    printf("uchar buf string : %s\r\n", (char *)uBuf);
    printf("uchar buf string : %s\r\n", uBuf);

    printf("-------------------------\r\n");

    return 0;
}
