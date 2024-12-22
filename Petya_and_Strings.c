#include<stdio.h>
#include<string.h>


int main()
{
    int i;
    char str1[100],str2[100],letter_1,letter_2;
    gets(str1);
    gets(str2);
    strlwr(str1);
    strlwr(str2);

    int compare = strcmp(str1,str2);
    printf("%d",compare);

    return 0;
}
