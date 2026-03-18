#include<conio.h>
#include <stdio.h>
void main()
{

    int i,j,n,mid,high,low,ele,a[20];
    printf("Enter the No Of Element:");
    scanf("%d",&n);
    printf("Enter the Elements");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Enter the Element TO Search:");
    scanf("%d",&ele);
    low=0;
    high=n-1;
    int f=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==ele)
        {
            printf("Element %d Found in Array",ele);
            f=1;
            break;
        }
        else if(ele>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    if(f==0)
        printf("Element Not FOund");

}

