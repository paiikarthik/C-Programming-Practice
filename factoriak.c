#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
    if(n==0 || n==1)

        return 1;
    return n*fact(n-1);
    }
int main()
{

    int num;
    printf("Enter the Nummber:");
    scanf("%d",&num);
    printf("Factorial of Number is %d8:",fact(num));
}
