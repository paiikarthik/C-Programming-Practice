#include<conio.h>
#include<stdio.h>

int bubble(int a[],int n)
{

    int i,j, temp;
    for(i=0;i<n-1;i++)
    {

        for (j=0;j<n-1-i;j++)
        {

            if(a[j]>a[j+1])
            {

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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
    bubble(arr,n);

    printf("Sorted  Array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
