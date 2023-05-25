#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of the rows\n");
    scanf("%d",&r);
    printf("Enter the number of the columns\n");
    scanf("%d",&c);
    int a[r][c],i,j,sum1,sum2;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("element-a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum1=0;
        for(j=0;j<c;j++)
        {
            sum1=sum1+a[i][j];
            
        }
        printf("The sum of the %d row is %d\n",i,sum1);
    }
    for(j=;j<c;j++)
    {
        sum2=0;
        for(i=0;i<r;i++)
        {
            sum2=sum2+a[i][j];
            
        }
        printf("The sum of the %d column is %d\n",j,sum2);
    }
    return 0;
    
}