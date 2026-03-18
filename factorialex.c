#include <conio.h>
#include<stdio.h>

int fac(int n)
{
    if(n==0 ||n==1)
        return 1;
    else
        return n*fac(n-1);
}

void main()
{

    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("Factorail of Number is %d",fac(num));
}
