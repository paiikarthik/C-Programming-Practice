#include <stdio.h>

void main()
{

    int i, low,mid,high, num,arr[20],ele,f;
    printf("Enter the Size of an array:");
    scanf("%d",&num);
    printf("Enter the array elements:");
    for(i=0;i<num;i++)
      scanf("%d",&arr[i]);
    printf("Enter the Element to search:");
    scanf("%d",&ele);
    low=0;
    high=num-1;
    f=0;
    while(low<=high)
    {

        mid=(low+high)/2;
        if(arr[mid]==ele)
        {

            printf("Eleemtn foudn");
            f=1;
            break;

        }
        else if(ele>arr[mid])
           low=mid+1;
           else
            high=mid-1;
    }
    if(f==0)
        printf("ELEment not found");
}

