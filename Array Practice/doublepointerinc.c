#include <stdio.h>


void main()
{

    int  a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    *p=17;
    **q=13;
    ***r=20;
    printf("a= %d \n",a);
    printf("a= %d \n",*p);
    printf("a= %d \n",**q);
    printf("a= %d \n",*(*(*r)));
    printf("Address of a=%x %x",p,&p);
}
