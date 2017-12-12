#include <stdio.h>
#include <string.h>
#define NUM 256
void vvod(char str1[],char end)
{
    int i=0;
    char c;
    while((i<NUM-1)&&((c=getchar())!=end))
    {
        str1[i]=c;
        i++;
    }
    str1[i]='\0';
}
int main()
{
    char str1[NUM],str2[NUM];
    vvod(str1,' ');
    vvod(str2,'\n');
    printf("%s %s",str2,str1);
    return 0;
}