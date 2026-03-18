#include<conio.h>
#include <stdio.h>
void main()
{

    int i,j,n, pos,ele,a[20];
    printf("Enter the No Of Element:");
    scanf("%d",&n);
    printf("Enter the Elements");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Enter the Element TO Search:");
    scanf("%d",&ele);
    int f=0;
    for(i=0;i<n;i++)
    {

        if (a[i]==ele)
        {

            pos=i;
            printf("Element %d Found at Position %d",ele,pos);
            f=1;
        }
    }
    if(f==0)
        printf("Element Not FOund");

}
