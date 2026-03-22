#include<stdio.h>

#define N 50
void main()
{

    int a[N][N], b[N][N],c[N][N], i,j,k,sum,n,m,p,q;
    printf("ENter the rows and Columns for First MAtrix:");
    scanf("%d %d",&m,&n);
    printf("Enter first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             scanf("%d",&a[i][j]);

        }

    }

    printf("ENter the rows and Columns for 2nd MAtrix:");
    scanf("%d %d",&p,&q);
     printf("Enter second matrix");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
             scanf("%d",&b[i][j]);

        }

    }

printf(" FIrst Matrix is \n");
for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);

        }
        printf("\n");
    }


printf(" Second Matrix is \n");
for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d \t",b[i][j]);

        }
        printf("\n");
    }


if(n!=p)
{
    printf("chaL nikal");

}
for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
           for(k=0;k<m;k++)
           {

               sum=sum+(a[i][k]*b[k][j]);
           }
           c[i][j]=sum;

        }

    }


  printf(" Multiplication Matrix is \n");
for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",c[i][j]);

        }
        printf("\n");
    }
}








