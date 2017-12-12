#include <math.h>
#include <stdio.h>
#define NUM 101
int main ()
{
    int kol,a,vvod,b;
    int mas1[NUM];
    int mas2[NUM];
    scanf("%d",&kol);
    a=0;
    do
    {
        scanf("%d",&vvod);
        mas1[a]=vvod;
        a++;
    }
    while(a<kol);
    mas2[0]=mas1[a-1];
    for(a=1,b=0; a<kol;a++,b++)
    {
        mas2[a]=mas1[b]++;
    }
    a=0;
    do
    {
        printf("%d ",mas2[a]);
        a++;
    }
    while(a<kol);
    return 0;
}
