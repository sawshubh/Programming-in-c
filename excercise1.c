//EXCERCISE
/* Print a multiplication table entered by the user*/

#include <stdio.h>

int main()
{
    int a,i,ans;
    
    printf("Enter the number you want multiplication of:");
    scanf("%d",&a);

    for (i=1; i<=10; i++)
    {
        ans = (a * i);
        printf("%d x %d = %d\n",a,i,ans);
    }

    return 0;
}