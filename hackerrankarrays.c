#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  n,i,*arr;
    
    scanf("%d",&n);
    
    arr = (int*)calloc(n,sizeof(int));
    if(arr==NULL)
    {
        printf("NULL");
    }
    
    for (i =0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = n-1;i>=0;i--)
    {
        printf("%d ",*(arr+i));  
    }
    return 0;
}