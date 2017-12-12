#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float v,a,s;
    scanf("%d", &n);
    for(a=0,v=1,s=3,i=-1;a<n;a++)
    {
        v=v+i*pow(s,-1);
        i=-i;
        s+=2;
    }
    printf("%0.6f", v);
    return 0;
}
