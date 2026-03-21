#include<stdio.h>

void main()
{

    int i,j, a[2][3];

    printf("Enter the Array Elements:");
    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {

            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++)a
    {

        for(j=0;j<2;j++)
        {

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}
