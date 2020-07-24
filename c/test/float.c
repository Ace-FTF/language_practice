#include <stdio.h>

void main(void)
{

//    int in = 20;

//    printf("in = %d\r\n", in);
//    printf("(float)in = %f\r\n", (float)in);
//
//    printf("flo = %f\r\n", flo);
//    printf("(int)flo = %d\r\n", (int)flo);
//
//    printf("---------------\r\n");
//    printf("in(%%d) = %d\r\n", in);
//    printf("in(%%f) = %f\r\n", in);
//
//    printf("float(%%d) = %f\r\n", flo);
//    printf("float(%%f) = %d\r\n", flo);


    float flo1 = 2.222;
    float flo2 = 1.111;
    float val = 0;
    int a = 10;
    int b = 5;
    float c = 0;

    val = flo1/flo2;
    c = ((float)b)/((float)a);
    printf("flo1/flo2 = %f\r\n", val);
    printf("b/a = %f\r\n", c);
}
