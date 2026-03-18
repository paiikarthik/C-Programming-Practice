#include<conio.h>
#include<stdio.h>

void bubble(int arr[],int n)
{

    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
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

int main()
{
    int num, a[20];
    printf("Enter the Number of Elements");
    scanf("%d",&num);
    printf("enter the Array Elements:");
    for(int i=0;i<num;i++)
        scanf("%d",&a[i]);

   bubble(a,num);

   printf("Elements After Sorting is:");
   for(int i=0;i<num;i++)
    printf("%d ",a[i]);
}
