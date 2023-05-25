/*Determinant of two matrices */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n][n],i,j;
    printf("Enter the elements of the matrix a:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int pro1=1,pro2=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i==j)
           {
            pro1=pro1 * a[i][j];
           }
           else
           {
            pro2=pro2* a[i][j];
           }
        }
    }
     printf("The determinant of the matrix is %d\n",pro1-pro2);   
    return 0;
}
