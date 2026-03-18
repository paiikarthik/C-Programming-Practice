#include <stdio.h>

void main()
{

    int i, pos, num,arr[20],ele,f;
    printf("Enter the Size of an array:");
    scanf("%d",&num);
    printf("Enter the array elements:");
    for(i=0;i<num;i++)
      scanf("%d",&arr[i]);
    printf("Enter the Element to search:");
    scanf("%d",&ele);
    f=0;
    for(i=0;i<num;i++)
    {

        if(arr[i]==ele)
        {

            pos=i;
            printf("Element %d found at postion %d",ele,pos);
            f=1;

        }
    }
    if(f==0)
        printf("ELEment not found");
}
