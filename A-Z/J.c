#include<stdio.h>
#include<math.h>
int main()
{
    float r,x0,y0,R,x1,y1,D,b,c,d;
    scanf("%f%f%f%f%f%f",&r,&x0,&y0,&R,&x1,&y1);
    D=sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
    b=r+R;
    c=R+D;
    d=r+D;
    if ((r>0)&&(R>0)&&(D>0)&&(b>D)&&(R<d)&&(r<c))
    {
        printf("YES");
    } 
    else 
    {
        if ((r>0)&&(D==0)&&(R>0)&&(r==R))
        {
            printf("YES");
        }
        else
        {
            if ((R>0)&&(r>0)&&(D>0)&&((b==D)||((c==r)||(d==R))))
            {
                printf("SINGLE");
            }
            else 
            {
                printf("NO");
            }
        }
    }
    return 0;
}
