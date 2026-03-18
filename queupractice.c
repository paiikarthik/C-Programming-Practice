#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int rear=-1;
int front=-1;
int queue[SIZE];

void push()
{
    int item;
    if(rear==SIZE-1)
    {

        printf("queue is Full");
        return;

    }
    else{
          printf("Enter the Element:");
    scanf("%d",&item);
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queue[rear]=item;
    printf("Element  %d Inserted Suceesfully \n",item);
    }

}


 void pop()
 {

     if(front==-1 ||front>rear)
     {

         printf("queue is Empty");
     }
     else{
        printf("Removed Element is %d",queue[front]);
        front++;
     }
 }

 void display()
 {

     if(front==-1 ||front>rear)
     {
         printf("queue is EMpty \n");

     }
     else{
        printf("Elements are: \n");
        for(int i=front;i<=rear;i++)
            printf("%d ",queue[i]);
     }
 }

 void main()
 {
     int choice;
     while(1)
     {
         printf("1.Push \n 2.Pop  \n3. Display \n4. Exit \n");
         printf("Enter your Choice \n");
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
            exit(0);
            break;
         default:
            printf("invalid Option");
         }
     }
 }

