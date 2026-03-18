#include <conio.h>
#include<stdio.h>

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

void main()
{

    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("Fibonacci sereis is");
    for(int i=0;i<num;i++)
        printf("%d",fib(i));
}

