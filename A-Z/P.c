#include <math.h>
#include <stdio.h>
int main()
{
    int a,i,d;
    scanf("%d", &a);
    for(i=2,d=0;i*i<=a&&(d!=1)&&(a!=0);i++)
    {      
        while(a%i==0)
        {
            d=1;
            i++;
        }
    }
    if ((d==1)||(a<=1))
    {
        printf("NO");
    }
    else
    {

        if (a>0)
        {
            printf ("YES");
        }
        else 
        {
            printf ("NO");
        }
    }
    return 0;
}
