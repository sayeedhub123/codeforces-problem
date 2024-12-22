#include<stdio.h>
int main()
{
    int i,j,count=0,f=0;
    char str[100];
    gets(str);

    for(i=0; str[i]!= '\0'; i++)
    {
        for(j=i-1; j>=0; j--)
        {
            if(str[i] == str[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        count++;
        f=0;
    }
    if(count%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

        return 0;

}


