//CHARACTER IS ALPHABET OR NOT

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any character:");
    gets(ch); 

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z'))
    {
        printf("%s is an alphabet",ch);
    }
    else
    {
        printf("%s is not an alphabet",ch);
    }
    return 0;
}
