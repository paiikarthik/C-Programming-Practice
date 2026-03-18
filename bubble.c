#include<stdio.h>
void main()
{

    int n, ele, f, arr[20],i,pos;
    printf("Enter the Number Of Elements:");
    scanf("%d",&n);
    printf("Enter the Aray Ele:");
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    printf("Enter the ELEMenet to seaech:");
    scanf("%d",&ele);
    f=0;
    for(i=0;i<n;i++)
    {

        if(arr[i]==ele)
        {

            pos=i;
            printf("Eleement %d Fount at positiob %d",ele,pos);
            f=1;
            }
    }

if(f==0)
{

    printf("Eleemnt not found");
}
}
