#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    float b,c,d;
    b=0;
    c=0;
    do
    {
        scanf("%d", &a);
        if (a!=0)
        {
            b+=1;
            c+=a;
        }
    }
    while(a!=0);
    d=c/b;
    printf("%0.2f",d);
    return 0;
}
