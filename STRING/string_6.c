#include <stdio.h>
#include <string.h>
#define NUM 256
void vvod (char str[])
{
    int i=0;
    char c;
    while ((i<NUM-1)&&((c=getchar())!='\n'))
    {
        if (((c>'a')||(c<'z'))&&((c>'A')||(c<'Z')))
        {
            str[i]=c;
            i++;
        }
    }
    str[i]='\0';
}
int palendrom_check(char str[])
{
    int flag,i,n;
    for(flag=0,n=0,i=0;i<strlen(str)/2;i++) if (str[i]==str[strlen(str)-i-1]) n++;  
    if(n!=strlen(str)/2) flag=1;
    return flag;
}
void move (char str[])
{
    int i;
    for (i=0;i<strlen(str);i++) str[i]=str[i+1];
}
int main ()
{
    int i;
    char str1[NUM-1];
    vvod (str1);
    for (i=0;palendrom_check(str1)!=0;i++) move(str1);    
    printf ("%d",i);
    return 0;
}