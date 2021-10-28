#include<stdio.h>
#include<string.h>

int main()
{
    char ch[2];
    char * string = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Enter any character:");
    gets(ch);

    for (int i = 0; i<= 52; i++)
    {
        printf("%c\n",string[i]);
    }

    return 0;
}
