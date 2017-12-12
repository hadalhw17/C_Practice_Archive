#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,r;
    scanf("%d%d", &m,&n);
    if(m!=0)
    {
        if(n!=0)
        {
            if (n>=m)
            {
                while (m!=0)
                {
                    r=n%m;
                    n=m;
                    m=r;
                }
                printf ("%d", n);
            }
            else
            {
                while (n!=0)
                {
                    r=m%n;
                    m=n;
                    n=r;
                }
                printf ("%d", m);
            }
        }
        else
        {
            printf("%d", m);
        }
    }
    else
    {
        printf("%d", n);
    }
    return 0;
}
