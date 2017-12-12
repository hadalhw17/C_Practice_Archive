#include <stdio.h>
int main()
{
    int N, M, x, y, a, d;
    scanf("%d%d%d%d", &N, &M, &x, &y);
    if (N>M)
    {
        a=M-x;
        d=N-y;
    }
    else
    {
        a=N-x;
        d=M-y;
    }
    if (a<x)
    {
        x=a;
    }
    if (d<y)
    {
        y=d;
    }
    if (x<=y)
    {
        printf("%d", x);
    }
    else
    {
        printf("%d", y);
    }
    return 0;
}
