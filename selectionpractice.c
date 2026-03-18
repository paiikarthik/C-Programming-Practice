#include<conio.h>
#include<stdio.h>

void selection(int arr[],int n)
{

    int i,j,temp,large;

    for(i=0;i<n-1;i++)
    {
        large=i;
        for(j=i+1;j<n;j++)
        {

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

int main()
{
    int num, a[20];
    printf("Enter the Number of Elements");
    scanf("%d",&num);
    printf("enter the Array Elements:");
    for(int i=0;i<num;i++)
        scanf("%d",&a[i]);

   selection(a,num);

   printf("Elements After Sorting is:");
   for(int i=0;i<num;i++)
    printf("%d ",a[i]);
}

