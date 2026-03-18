#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int top=-1;
int stack[SIZE];

void push()
{
    int item;
    if(top==SIZE-1)
    {

        printf("Stack is Full");

    }
    else{
          printf("Enter the Element:");
    scanf("%d",&item);
    top++;
    stack[top]=item;
    printf("Element  %d Inserted Suceesfully \n",item);
    }

}


 void pop()
 {

     if(top==-1)
     {

         printf("Stack is Empty");
     }
     else{
        printf("Removed Element is %d",stack[top]);
        top--;
     }
 }

 void display()
 {

     if(top==-1)
     {
         printf("Stack is EMpty \n");

     }
     else{
        printf("Elements are: \n");
        for(int i=top;i>=0;i--)
            printf("%d ",stack[i]);
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
