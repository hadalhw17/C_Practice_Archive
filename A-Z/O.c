#include <stdio.h>
#include <math.h>
int main()
{
    float x0,y0,x,y,r,guf;
    scanf ("%f%f%f%f%f", &x0,&y0,&r,&x,&y);  
    if (r>=0)
    {
        guf=sqrt(pow(y-y0, 2)+pow(x-x0, 2));
        if (guf==r) 
        {
            printf ("OTHER");
        }
        if (guf>r) 
        {
            printf ("OUTSIDE");
        }
        if (guf<r) 
        {
            printf ("INSIDE");
        }
    }
    else 
    {
        printf ("ERROR");
    }
    return 0;
}

