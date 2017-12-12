#include <math.h>
#include <stdio.h>
int main()
{
    int a,i,c;
    scanf ("%d", &a);
    c=0;
    for (i=1;i<a;i++)
    {

        if(a%i==0)
        {
            c+=i;
        }
        
    }
    if(c==a)
    {
        printf("YES");  
    }
    else
    {
        printf("NO");
    }
    return 0;
}
