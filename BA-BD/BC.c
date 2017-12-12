#include<stdio.h>
int chisloN(int n,int k)
{
    int f;
    for(f=0;k/n>0;f+=(k/n),k/=n);
    return f;
}
int chisloK(int n,int k)
{
    int f;
    for(f=0;k%n==0;k/=n,f++);
    return f;
}
int reshenie(int n,int k)
{
    int flag,a,b,c;
    for(a=0,b=0,c=2;c<=k;)
    {
        if(k%c==0)
        {
            b=chisloN(c,n)/chisloK(c,k);
            if(a==0)
                flag=b;
                a=1;
            if(b<flag)flag=b;
            k/=c;
        }
        else c++;
    }
    return flag;
}
int prostoe_proverka(int n,int k)
{
    int prost,a,flag,reshenie;
    for (prost=k,a=2,flag=0;((a*a<=prost&&flag!=1)&&(prost!=0));a++ ) 
    {
        if (prost%a==0) flag=1;   
    }
    if ((flag!=1)&&(prost>1))
    {
        for(reshenie=0;n!=0;n=n/k,reshenie=reshenie+n); 
        return 0;
    }
    else return 1;
}
int otv_prost(int n,int k)
{
    int prost,a,flag,reshenie;
    for (prost=k,a=2,flag=0;a*a<=prost&&flag!=1&&(prost!=0);a++ ) 
    {
        if (prost%a==0) flag=1;   
    }
    if ((flag!=1)&&(prost>1))
    {
        for(reshenie=0;n!=0;n/=k,reshenie+=n); 
        return reshenie;
    }
    return 1;
}
int main()
{
    int n,k;
    scanf("%d%d", &n,&k);
    if(prostoe_proverka(n,k)==0) printf("%d",otv_prost(n,k));
    else printf("%d", reshenie(n,k));
    return 0;
}
