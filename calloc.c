/*CALLOC()- IT USED TO DYNAMICALLY ALLOCATE MEMORY TO ARRAYS*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n, *arr,i;
    printf("Enter the size of n:");
    scanf("%d",&n);
    arr = (int*)calloc(n,sizeof(int));

    if (arr == NULL)
    {
        printf("Memory is full");
    }
    else
    {
        printf("\nenter the elements of array:");
        for (i = 0; i < n; i++)
        {   
            scanf("%d",&arr[i]);    
        } 
        printf("%d\n",*(arr+i));
    }
    return 0;
}
