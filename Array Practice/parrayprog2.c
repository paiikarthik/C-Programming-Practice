#include<stdio.h>


void main()
{

    int m[5];
    int sum=0;
    float avg;
    int i;

    printf("Enter the Marks");
    for(i=0;i<5;i++)
    {

        scanf("%d",&m[i]);
    }

    for(i=0;i<5;i++)
    {

        sum=sum+m[i];
    }

    avg=sum/5;
    printf("Sum %d",sum);
    printf(" Average %f",avg);
}
