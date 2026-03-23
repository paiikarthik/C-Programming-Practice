
#include<stdio.h>

void main()

{

    int a=10, b=9;
    int *p,*q;
    p=(&a,&b);
    int c=*p;
    printf("Value of a= %d \n",a);
    printf("Value of a= %d \n",*p);

     printf("Value of a= %x \n",&a);
     printf("Value of a= %x \n",p);
     printf("Value of c %d \n",c);


}
