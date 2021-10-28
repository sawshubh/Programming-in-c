#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if (num > 0)
    {
        printf("%d is a positive number",num);
    }
    else if (num < 0)
    {
        printf("%d is a negative number",num);
    }
    else
        printf("0 is neither positive nor negative ");
    return 0;
}
