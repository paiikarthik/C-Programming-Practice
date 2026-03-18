#include<conio.h>
#include<stdio.h>

void main()
{
    int i,n,pos,ele,a[20];
    printf("Enter the Number of  Elemenents:");
    scanf("%d",&n);
    printf("ENter Number of Array Elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the Element to Search");
    scanf("%d",&ele);
    int f=0;
    for(i=0;i<n;i++)
    {

        if(a[i]==ele)
        {

            pos=i;
            printf("Element %d found a postion %d",ele,pos);
            f=1;
        }
    }
    if(f==0)

        printf("Element No Found");
}
