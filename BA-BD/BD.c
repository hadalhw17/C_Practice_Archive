#include <math.h>
#include <stdio.h>
#define NUM 101
int main ()
{
    int kol,vvod,a,max,min;
    int mas[NUM];
    int mas2[NUM];
    a=0;
    scanf ("%d",&kol);
    scanf ("%d",&vvod);
    mas[a]=vvod;
    max=vvod;
    min=vvod;
    a=1;
    while(a<kol)
    {
        scanf ("%d",&vvod);
        mas[a]=vvod;
        if (vvod<min)
        {
            min=vvod;
        }
        if (vvod>max)
        {
            max=vvod;
        }
        a++;
    }
    for (a=0;a<kol;a++)
    {
        if ((mas[a]!=max) && (mas[a]!=min))
        {
            mas2[a]=mas[a];
        }
        if (mas[a]==max)
        {
            mas2[a]=min;
        }
        if (mas[a]==min)
        {
            mas2[a]=max;
        }
    }
    for (a=0;a<kol;a++)
    {
        printf ("%d ",mas2[a]);
    }
    return 0;
}

