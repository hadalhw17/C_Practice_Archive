#include <stdio.h>
int main()
{
    int na,ko,i,otw,q,pom1,pom2,a,c;
    q=0;
    pom1=0;
    pom2=0;
    c=0;
    scanf("%d%d", &na, &ko);
    for (i=na;i<=ko-2;i++)
    {
        for (a=1;a<=i/2;a++)
        {
            if (i%a==0)
            {
                c++;
            }
        }
        if (c==1)
        {
            pom1=i;
            c=0;
        }
        for (a=1;a<=(i+2)/2;a++)
        {
            if ((i+2)%a==0)
            {
                c++;
            }
        }
        if (c==1) pom2=i+2;
        {
            c=0;
        }
        if (pom1+pom2==i+i+2)
        {
            q++;
            otw=i;

        }
    }
    if (q==1)
    {
        printf("%d %d", otw, otw+2);
    }
    if (q==0)
    {
        printf("NO");
    }
    if (q>1)
    {
        printf("ERROR");
    }
    return 0;
}
