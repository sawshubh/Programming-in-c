#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number to check whether it's even or odd:");
    scanf("%d",&a);

    if (a % 2 == 0)
    {
        printf("%d is an even number",a);
    }
    else
    {
        printf("%d id an odd number",a);
    }
    return 0;
}
