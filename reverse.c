#include <stdio.h>
int main()
{
    int n, reverse = 0;

    printf("enter a number:");
    scanf("%d",&n);

    printf("Before reverse:%d",n);

    while(n > 0)
    {
        reverse = reverse * 10 + n%10;
        n = n/10;
    }
    printf("\nAfter reverse:%d",reverse);
    return 0;
}