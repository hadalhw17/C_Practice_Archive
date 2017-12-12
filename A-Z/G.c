#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f%f%f", &a,&b,&c);
    if((a>0)&&(b>0)&&(c>0))
    {
        d=a+b;
        e=a+c;
        f=c+b;
        if((a<f)&&(b<e)&&(c<d))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf ("NO");
    }
    return 0;
}
