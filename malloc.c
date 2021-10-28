/*MALLOC: MEMORY ALLOCATION USED FOR ALLOCATING MEMORY FOR STRUCTURE DATATYPE*/
#include<stdio.h>
#include<stdlib.h>
struct emp   
{
    int eid;
    char ename[20];
    float esal;
};

int main()
{
    struct emp* ptr;

    ptr = (struct emp*)malloc(sizeof(struct emp));
    if (ptr==NULL)
    {
        printf("No memory");
    }
    else
    {
        printf("Enter employees details:");
        scanf("%d%s%f",&ptr->eid,ptr->ename,&ptr->esal);
        printf("\nID:%d\nName:%s\nSalary:%0.f",ptr->eid,ptr->ename,ptr->esal);
    }
    return 0;
}
