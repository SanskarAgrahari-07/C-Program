/*Read and dispaly elements in matrix form */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements of the array is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}