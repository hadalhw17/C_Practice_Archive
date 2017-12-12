#include <math.h>
#include <stdio.h>
int main ()
{
    int a,q,b,z,v;
    const int c=100001;
    int zzz[c];
    a=0;
    scanf ("%d",&v);
    for (z=0;z<=v;a++)
    {
        for (q=2, b=0 ;(q*q<=a)&&(b!=1)&&(a!=0);q++)
        {
            if (a%q==0)
            {
                b++;
            }
        }
        if ((b!=1)&&(a>1))
        {
            zzz[z]=a;
            z++;
        }
    }
    printf ("%d",zzz[v-1]);
    return 0;
}

