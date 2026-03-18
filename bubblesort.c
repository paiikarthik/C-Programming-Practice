#include <stdio.h>

void bubble(int arr[],int n)
{

    int i,j,temp;
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {

            if(arr[j]>arr[j+1])
            {

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}



void main()
{

    int n,i,arr[20];
    printf("Enter the Size of an array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }

   bubble(arr,n);

    printf("Sorted ELement is:");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);


}

