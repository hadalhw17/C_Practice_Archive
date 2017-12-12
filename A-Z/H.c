#include<stdio.h>
#include<math.h>
int main()
{
    float r,a,d,di;
    int c;
    scanf("%f%f%d", &r,&a,&c);
    di=sqrt(2*a*a);
    d=2*r;
    if((r>0)&&(a>0)&&((c==1)||(c==0)))
    {
        if(((c==1)&&(d<=a))||((c==0)&&(d>=di)))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    if((r<=0)||(a<=0)||((c!=1)&&(c!=0)))
    {
        printf("ERROR");
    }
    
    return 0;
}
