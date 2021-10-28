//IMPELEMENTATION OF QUEUE USING ARRAY
// IT WILL FOLLOW FIFO PRINCIPLE
#include<stdio.h>
#define MAX 50
void dequeue();
void enqueue();
void display();
void exit(int);

int queue[MAX];
int rear = -1;
int front = -1;
int main()
{
    int ch;

    while(1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");

        printf("Enter choice:");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: enqueue();
            break;
        case 2: dequeue();
            break;
        case 3: display();
            break;
        case 4:exit(1);
            break;        
        default: printf("***invalid input***\n");
            break;
        }
    }

    return 0;
}

void enqueue()
{
    int add_item;
    if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;
            printf("enter the element in queue:");
            scanf("%d",&add_item);
            rear = rear + 1;
            queue[rear] = add_item;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Oueue Underflow\n");
        return ;
    }
    else
    {
        printf("%d deleted\n",queue[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue is :");
        for (int i = front; i <= rear; i++)
            printf(" %d",queue[i]);
        printf("\n");
    }  
}

