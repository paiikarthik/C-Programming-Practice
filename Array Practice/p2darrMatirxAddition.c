#include<stdio.h>

void main()
{

    int a[3][3], b[2][3],c[2][3], i,j;
    printf("Enter The First Matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
             scanf("%d",&a[i][j]);

        }

    }

     printf("Enter The second Matrix: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
             scanf("%d",&b[i][j]);

        }

    }


printf(" FIrst Matrix is \n");
for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);

        }
        printf("\n");
    }


printf(" Second Matrix is \n");
for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",b[i][j]);

        }
        printf("\n");
    }


printf("Third MAtrix is: \n");

for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }

}
