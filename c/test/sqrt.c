#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 0;
    int m = 0;
    int n = 0;
    printf("start.\r\n");

    x = 1;
    while(x++) {
        m = (int)sqrt(x + 100);
        n = (int)sqrt(x + 100 + 168);

        if ((m * m == x + 100) && (n * n == x + 100 + 168)) {
            printf("The num is: %d\r\n", x);
            break;
        }
    }

    return 0;
}
