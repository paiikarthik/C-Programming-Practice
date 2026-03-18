#include<stdio.h>
#include<conio.h>
#define SIZE 5

int front=-1;
int rear=-1;
int q[SIZE];


void enque()
{
    int item;
    if(rear==SIZE-1)
        printf("Queue is Full:");
    else
    {

        printf("ENter the ELements:");
        scanf("%d",&item);
        if(front==-1)
        {

            front=0;
        }
        rear++;
        q[rear]=item;
        printf("Elements are Inserted");
    }
}

void deque()
{

    if(front==-1 || front>rear)
    {

        printf("Queue us Empty");
    }
    else{
        printf ("Element Deleted Sucessfully %d",q[front]);
        front++;
    }


}

void display()
{

    int i;
    if(front==-1 || front>rear)
    {
        printf("EMoty");
    }
    else
    {
        printf("Element Liast is:");
        for(i=front;i<=rear;i++)
            printf("%d",q[i]);
    }
}



void main()
{
    int choice;
    while(1)
    {

        printf("1.Push \n 2.Pop\n 3.Display\n 4.Exit\n");
        printf("Enter YOur choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:

            break;
        default:
            printf("Invalid Chioices:");
        }
    }
}
