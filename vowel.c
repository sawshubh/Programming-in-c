#include <stdio.h>

int main()
{
    char x;
    int flag;
    flag  = 0;

    printf("Enter the aplhabet:");
    scanf("%c",&x);

    if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
    {
        flag = 1;
    }

    if (flag == 1)
    {
        printf("%c is a vowel",x);
    }
    else
    {
        printf("%c is a consonent",x);
    }

    return 0;
}