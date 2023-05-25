/*Sum of two matrices */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n][n],b[n][n],i,j,sum=0;
    printf("Enter the elements of the matrix a:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the matrix b:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The sum of the elements of the matrices is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           sum=a[i][j]+b[i][j];
           printf("%d\t",sum);
        }
     printf("\n");   
    }
    return 0;
}