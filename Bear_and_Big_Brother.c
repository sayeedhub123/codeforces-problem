#include<stdio.h>
int main()
{
    int a, b, year=0;
    scanf("%d%d",&a,&b);

    while(1)
    {
        year++;
        a*=3;
        b*=2;

        if(a>b)
        {
            printf("%d",year);
            break;
        }
    }
    return 0;
}
