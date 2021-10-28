#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;

    printf("size of the integer is:%d\n",sizeof(int));
    printf("address:%d\tvalue:%d\n",p,*p);
    printf("address:%d\tvalue:%d\n\n",p+1,*(p+1));

    char *p0;
    p0 = (char*)p;

    printf("size of char is:%d\n",sizeof(char));
    printf("address:%d\tvalue:%d\n",p0,*p0);
    printf("address:%d\tvalue:%d\n",p0+1,*(p0+1));



    return 0;
}