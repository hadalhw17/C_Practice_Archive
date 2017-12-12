#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,d,e,f;
    scanf ("%f%f%f", &a,&b,&c);
    d=a+b;
    e=a+c;
    f=b+c;
    if ((d>c) && (e>b) && (f>a))
    {

        if ((pow(a,2)+pow(b,2)>pow(c,2))&&(pow(a,2)+pow(c,2)>pow(b,2))&&(pow(c,2)+pow(b,2)>pow(a,2)))
        {
            printf ("YES");    
        }  
        else
        {
            printf ("NO");
        }
    }
    else
    {
        printf ("NO");
    }
    return 0;
}

