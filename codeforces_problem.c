/// way too long words
/*#include<stdio.h>
int main()
{
    int i, n;
    char  str[100];
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        gets(str);
        if(strlen(str)>=11)
        {
            printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
        }
        else
            puts(str);
    }
return 0;

}
*/



/// Team
/*#include<stdio.h>
int main()
{
    int i,n,a,b,c,count=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c >=2)
            count++;
    }
    printf("%d",count);

return 0;
}
*/


///Bit++
/*#include<stdio.h>
int main()
{
    int i,n,X=0;
    char str[4];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str);
        if(str[1] == '+')
            X++;
        else
            X--;
    }
    printf("%d",X);

}
*/


/// next round
/*#include<stdio.h>
int main()
{
    int n,k,i,a[50],next=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]>k && a[i]>0)
            next++;

    }
    printf("%d",next);


}
*/

/// beautiful matrix

/*#include<stdio.h>
#include<math.h>
int main()
{

    int i,j,row,col,a[6][6];


    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                row = abs(3-i);
                col = abs(3-j);
                printf("%d",row+col);

            }

        }

    }

}
*/

/// Boy or Girl
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















































