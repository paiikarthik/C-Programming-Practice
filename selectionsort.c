#include<conio.h>
#include<stdio.h>

int selection(int a[],int n)
{

    int i,j,large, temp;
    for(i=0;i<n-1;i++)
    {
        large=i;
        for (j=i+1;j<n;j++)
        {

            if(a[j]>a[large])
            {

               large=j;
            }
        }
        temp=a[large];
        a[large]=a[i];
        a[i]=temp;
    }
}

int main()
{
    int i, n,arr[20];
    printf("Enter the Number Of Elements:");
    scanf("%d",&n);
    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    selection(arr,n);

    printf("Sorted  Array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

