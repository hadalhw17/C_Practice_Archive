#include<stdio.h>
#include<math.h>
int main()
{
    float x,k;
    int n,s,b;
    scanf("%f %d", &x,&n);
    b=-n;
    k=x;
    for(s=1;((s<n||s<b));s=s+1)
    {
        k=k*x;
    }
    if(n==0)
    {
        printf("1.000");
    }
    if(n>0)
    {
        printf("%0.3f", k);
    }
    if(n<0)
    {
        if(k!=0)
        {
            printf("%0.3f", 1/k);
        }
        else
        {
            printf("%0.3f", k);
        }
    }
    return 0;
}
