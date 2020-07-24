#include <stdio.h>

int func (int x, int y)
{
    static int m=0, i=2;
    i += m + 1;
    m = i + x + y;

    return m;
}

main()
{
    int j = 4, m = 1, k;

    k = func(j,m);
    printf("%d\n", k);
    k = func(j,m);
    printf("%d\n", k);
}
