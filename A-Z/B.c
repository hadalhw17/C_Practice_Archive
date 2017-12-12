#include <stdio.h>
int main()
{
    int a,b,c,d,e; 
    scanf("%d%d%d%d%d",&a,&b,&c, &d, &e);

    if(((a<=d)&&(b<=e))||((a<=e)&&(b<=d))||((a<=d)&&(c<=e))||((a<=e)&&(c<=d))
    ||((b<=d)&&(c<=e))||((b<=e)&&(c<=d)))
    {
        printf("YES");
    }
    else
    {
        printf ("NO");
    }
    
    return 0;
}
