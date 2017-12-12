#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2,D,d, min, max;
    scanf("%d%d%d", &a,&b,&c);
    D=b*b-4*a*c;
    d=sqrt(D);
    if ((a==0)&&(b==0)&&(c==0)) 
    {
        printf ("-1"); 
    }
    else
    {
        if ((D<0)||((a==0)&&(b==0))) 
        {
            printf ("0");     
        }
        else
        {
            if (a==0)
            {
                x1=(-c)/b;
                printf ("1 %1.2f",x1);
            }
            else
            {
                if (D==0)
                {
                    x1=(-b)/(2*a);
                    printf ("3 %3.2f",x1);
                }
                else 
                {
                    if ((D>0)&&(a!=0)) 
                    {
                        x1=((-b)-d)/(2*a);
                        x2=((-b)+d)/(2*a);
                        if (x1>x2) 
                        {
                            max=x1; min=x2;
                            printf ("2 %3.2f %3.2f",max,min);
                        }
                        if (x2>x1) 
                        {
                            max=x2; min=x1;
                            printf ("2 %3.2f %3.2f",min,max);
                        }
                        
                    }    
                }       
            }
        }        
    }
    return 0;
}

