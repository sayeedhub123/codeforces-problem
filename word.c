#include<stdio.h>
int main()
{
    char str[200];
    gets(str);
    int x=0,y=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]>=97 && str[i]<= 122)
        {
            x++;
        }
        if(str[i]>=65 && str[i]<=90)
        {
            y++;
        }
    }

    if(x>y || x==y)
    {
        strlwr(str);
        puts(str);
    }
    else
    {
        strupr(str);
        puts(str);
    }
}
