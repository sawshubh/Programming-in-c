#include <stdio.h>
int main()
{
    int score;

    printf("Enter your score:");
    scanf("%d",&score);

    switch (score / 10)
    {
    case 10:
    case 9:
        printf("MERIT !");
        break;
    
    case 8:
        printf("DISTINCTION !");
        break;

    case 7:
        printf("FIRST CLASS !");
        break;

    case 6:
        printf("FIRST CLASS !");
        break;

    case 5:
        printf("SECOND CLASS !");
        break;
    
    case 4:
        printf("SECOND CLASS !");
        break;          

    case 3:
        printf("FAIL !");
        break;          

    default:
        printf("FAIL !");
        break;
    }

    return 0;
}
