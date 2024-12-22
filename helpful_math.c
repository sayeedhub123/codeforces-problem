#include<stdio.h>
#include<math.h>
int main()
{
    char str[100];
    gets(str);

    for(int i=0; i<strlen(str)-2; i++)
    {
        if(str[i] != '+')
        {
            for(int j=i+2; i<strlen(str); j++)
            {
                if(str[i]>str[j])
                {
                    char temp  = str[i];
                    str[i] = str[j];
                    str[j]= temp;

                }

            }
        }
    }
    puts(str);
}
