#include<conio.h>
#include<stdio.h>

void main()
{
    int i,n,mid,low,high,ele,a[20];
    printf("Enter the Number of  Elements:");
    scanf("%d",&n);
    printf("Enter Number of Array Elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the Element to Search");
    scanf("%d",&ele);
    low=0;
    high=n-1;
    int f=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==ele)
        {

            printf("Element Found in The Array");
            f=1;
            break;
        }else if(ele>a[mid])

            low=mid+1;
         else
        high=mid-1;
    }
    if(f==0)

        printf("Element No Found");
}

