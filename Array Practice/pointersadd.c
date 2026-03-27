
#include<stdio.h>

void main()
{

    int a[5]={1,4,2,-8,0};
    int *p=&a[0];
    printf("Value is %u \n",*p);
    printf("Address is %u",p);
    p=p+1;
    printf("value of %d \n",*p);
     printf("Address is %u",p);

}
