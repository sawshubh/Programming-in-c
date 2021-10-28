#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
     printf("Enter a string:");
     gets(str);

     int i;

     for (i = 0; i < strlen(str); i++)
     {
         if (str[i]>=65 && str[i]<=90)
            str[i] = str[i] + 32;
     }

     printf("Lower case: %s", str);

     return 0;
     
}