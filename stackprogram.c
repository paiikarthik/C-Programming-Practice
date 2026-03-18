#include<conio.h>
#include<stdio.h>

#define MAX 5

int stack[MAX];
int top=-1;

void push()
{
int item;
if(top==MAX-1)
{
    printf("Queue is Full");
    return;
}
printf("Enter the Element to Insert");
scanf("%d",&item);
top++;
stack[top]=item;
printf("Element Inserted Sucesfully");
}


void pop()
{

    if(top==-1)
    {

        printf("Stack is Empty:");
    }
    else
        {printf("%d Element is Deleted From Stack",stack[top]);
        top--;
}
}
void display()
{

    if(top==-1)
        printf("Eleemnt is Not There");

    else{

         printf("Stack Elements are:");
        for(int i=top;i>=0;i--)
            printf("%d",stack[i]);
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
            push();
            break;
        case 2:
            pop();
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
