#include <stdio.h>
#include <string.h>

main ()
{
    char *a = "blue1";
    char b[] = "blue1";

    printf("%d\r\n", strlen(a));
    printf("%d\r\n", strlen(b));
    printf("%d\r\n", sizeof(a));
    printf("%d\r\n", sizeof(b));
}
