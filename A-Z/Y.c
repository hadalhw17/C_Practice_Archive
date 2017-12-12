#include <math.h>
#include <stdio.h>
int main()
{
    int a,b,d,e,f,g,h,i;
    scanf("%d", &a);
    b=0;
    d=0;
    e=0;
    f=0;
    do
    {
        g=a;
        h=a;
        i=a;
        scanf("%d",&a);
        b=b+1;
        if(a==-2*pow(10,9))
        {
            
        }
        else
        {
            if((a>g)&&(a!=-2*pow(10,9)))
            {
                d++;
            }
            if((a==h)&&(a!=-2*pow(10,9)))
            {
                f++;
            }
            if((a<i)&&(a!=-2*pow(10,9)))
            {
                e++;
            }
        }
    }
    while(a!=-2*pow(10,9));
    printf("%d\n", b);
    if ((d>0)&&(e==0)&&(f==0))
    {
        printf("ASCENDING");
    }
    else
    {
        if ((d>0)&&(f>0)&&(e==0))
        {
            printf("WEAKLY ASCENDING");
        }
        else 
        {
            if ((e>0)&&(f==0)&&(d==0))
            {
                printf("DESCENDING");
            }
            else
            {
                if ((e>0)&&(f>0)&&(d==0))
                {
                    printf("WEAKLY DESCENDING");
                }
                else
                {
                    if ((f>0)&&(d==0)&&(e==0))
                    {
                        printf("CONSTANT");
                    }
                    else
                    {
                        printf("RANDOM");
                    }
                }
            }
        }
    }
    return 0;
}
