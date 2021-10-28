#include <stdio.h>
int main()
{
    int i;

    printf("enter the num:");
    scanf("%d",&i);

    do
    {
        i = i + 2;
        printf("%d\n",i);
    } while (i < 40);
    
    return 0;
}
