
#include<stdio.h>

void main()
{

    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("%d\n",*p);
    printf("%d %d %d \n",(*p)++,*p++,*++p); //
    q=p+3;

    printf("%d \n",*q-3);
    printf("%d \n",*--p+5);
    printf("%d \n",*p+*q);
}


//*++p (RIGHTMOST runs first) ++p → p moves to a[1] *p = 11
// *p++ prints current *p = 11 then p++ → moves to a[2] prints: 11
// (*p)++ *p = -1 prints -1 then increments → becomes 0  prints: -1
// q = p + 3; p → a[2]  q → a[5] = 5
