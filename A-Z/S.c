#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d", &a);
    b=a;
    c=a;
    do
    {
        scanf("%d", &a);
        if(a!=0)
        {
            if(a>b)
            {
                b=a;
            }
            if(a<c)
            {
                c=a;
            }
        }   
    }
    while(a!=0);
    printf("%d %d", c, b);
    return 0;
}
