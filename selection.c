#include <stdio.h>

void select(int arr[],int n)
{

    int i,j,temp,large;
    for(i=0;i<n-1;i++)
    {

        for(j=i+1;j<n;j++)
        {
            large=i;
            if(arr[j]>arr[large])
            {

               large=j;
            }

        }
         temp=arr[large];
                arr[large]=arr[i];
                arr[i]=temp;
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

   select(arr,n);

    printf("Sorted ELement is:");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);


}


