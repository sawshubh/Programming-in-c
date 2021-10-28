
#include<stdio.h>
int main()
{
    int m,s;

    printf("***Enter the marks***");
    printf("\nMaths:");
    scanf("%d",&m);
    printf("Science:");
    scanf("%d",&s);

    if (m>=20 && s<20)
    {
        printf("Your gift is Cadburry"); //15 rs cadburry
    }
    else if (s>=20 && m<20)
    {
        printf("Your gift is Galaxy Bar"); //15 rs galaxy bar
    }
    else if (m>=20 && s>=20)
    {
        printf("Your gift is Dairy milk silk"); //45 rs dairy milk silk
    }
    
    return 0;
}
