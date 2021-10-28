#include <stdio.h>
int main()
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0;j < 8; j++)
        {
            printf("Enter zero to terminate\nEnter the number:");
            scanf("\n%d",&num);

            if (num == 0)
            {
                goto end;
            }
        }
        
    }
    end:
        printf("***program has terminated***");        
    return 0;
}
