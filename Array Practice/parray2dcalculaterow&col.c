#include<stdio.h>

void main()
{

    int a[3][3], i,j,sr,sc;
    printf("Enter The MAtrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             scanf("%d",&a[i][j]);

        }

    }


printf("Matrix is");
for(i=0;i<3;i++)
    {
        sc=0;
        sr=0;
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);

        }
        printf("\n");
    }



     for(i=0;i<3;i++)
    {
        sc=0;
        sr=0;
        for(j=0;j<3;j++)
        {
             sr=sr+a[i][j];
             sc=sc+a[j]
             [i];

        }

        printf("Sum ROw %d, Sum Column %d",sr,sc);

    }

}
