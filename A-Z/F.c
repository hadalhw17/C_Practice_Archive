#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,flag=0;
    scanf("%f%f%f", &a,&b,&c);
    if(a>b&&a>c)
    {
        if(a==sqrt(pow(b,2)+pow(c,2)))
        {
            printf("YES");
            flag=1;
        }
    }
    if(b>a&&b>c)
    {
        if(b==sqrt(pow(a,2)+pow(c,2)))
        {
            printf("YES");
            flag=1;
        }
    }
    if(c>a&&c>b)
    {
        if(c==sqrt(pow(a,2)+pow(b,2)))
        {
            printf("YES");
            flag=1;
        }
    }
    if(flag==0)
        printf("NO");
    return 0;
}
