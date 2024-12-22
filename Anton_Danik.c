#include<stdio.h>
int main()
{
    int x,ant=0,dan=0;
    scanf("%d",&x);
    char str[100];
    scanf("%s",&str);


    for(int i=0;i<x;i++)
    {
        if(str[i] == 'A')
            ant++;
        if(str[i] == 'D')
            dan++;
    }

    if(ant == dan)
        printf("Friendship");
    else if(ant>dan)
        printf("Anton");
    else
        printf("Danik");

}
