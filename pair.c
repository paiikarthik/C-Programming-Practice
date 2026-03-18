#include<stdio.h>
#include<conio.h>


int countIn(int arr[],int n)
{

    int count=0;
    for(int i=0;i<n-1;i++)
    {


        for(int j=i+1;j<n-1;j++)
        {
            if(i<j || arr[i]>arr[j])
                count=count+1;
                return count;
                printf("%d",count);
        }
    }
}

void main()
{

    int n,arr[10];
    printf("Enter the SIze of an array");
    scanf("%d",&n);
    printf("Enter the array Elements");
    for(int i=0;i<n;i++)
        scanf("%d",arr[i]);

    printf("Element Count %d is %d",countIn(arr,n));

}
