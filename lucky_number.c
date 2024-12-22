#include<stdio.h>
int main()
{
    int a[100];
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a[i]);

    }
    int f=0;
    for(int i=0;i<100;i++)
    {
        if(a[i]!='4' || a[i]!='7')
            break;
        else
            f=1;

    }
    if(f==1)
        printf("YES");
    else
        printf("No");

}
