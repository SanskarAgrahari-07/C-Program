#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n][n],i,j,t;
    printf("Enter the elements of the matrix a:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for ( i = 0; i < n; i++)
    {
        for(j=i;j<n;j++)
        {
            t = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
     for ( i = 0; i < n; i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}