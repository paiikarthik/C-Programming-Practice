#include<stdio.h>

void main()
{

    int a[5],b[5],c[5],i;
    printf("Enter first array elemenets: \n");
    for(i=0;i<5;i++)
        scanf("%d ",&a[i]);
    printf("Enter Second Array Elements:\n");
    for(i=0;i<5;i++)
        scanf("%d ",&b[i]);

    printf("Calculating sum:");
    for (i=0;i<5;i++)
    {

        c[i]=a[i]+b[i];
        printf("Sum of Array is %d \n",c[i]);
    }
}
