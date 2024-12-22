#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mod=n/5;
    if(n%5==0)
        printf("%d",mod);
    else
        printf("%d",mod+1);

}
