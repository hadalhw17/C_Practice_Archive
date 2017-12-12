#include<stdio.h>
#include<math.h>
int main()
{
    int k,l,m,n;
    scanf("%d%d%d%d", &k,&l,&m,&n);
    if(((k>0)&&(k<=8))&&((l>0)&&(l<=8))&&((m>0)&&(m<=8))&&((n>0)&&(n<=8))&&((k!=m)||(l!=n)))
    {
        if((k==m)||(l==n)||(fabs(m-k)==fabs(n-l)))
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
        printf("ERROR");
    }
    return 0;
}
