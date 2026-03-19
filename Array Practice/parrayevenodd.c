#include<stdio.h>

void main()
{

    int a[10];
    int even=0, odd=0,i;
    printf("Enter no of elemenets");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0;i<10;i++)
    {

        if (a[i]%2==0)
        {

           even=even+1;

        }
        else
            odd=odd+1;

    }
    printf("Even Elements: %d",even);
     printf("odd Elements: %d",odd);
}
