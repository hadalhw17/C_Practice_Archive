#include<stdio.h>
#include<math.h>
int main()
{
    float r,R,D,b,c,d;
    scanf("%f%f%f", &r,&R,&D);
    if((r>0)&&(R>0)&&(D>=0))
    {
        b=r+R;
        c=R+D;
        d=r+D;
        if((b<D)||((r>c)||(R>d))||((D==0)&&(r!=R)))
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }    
    return 0;
}
