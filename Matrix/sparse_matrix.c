#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of the rows\n");
    scanf("%d",&r);
    printf("Enter the number of the columns\n");
    scanf("%d",&c);
    int a[r][c],i,j,s,count=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Element-a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            count=count+1;
        }
    }
      for(i=0;i<r;i++)
    {
        int count=0;
        for(j=0;j<c;j++)
        {
           if(a[i][j]==0)
               s=s+1;
        }
    }
    if(s>(count/2))
        printf("It is a sparse matrix\n");
    else
    printf("It is not a sparse matrix\n");
    return 0;
}
           
        
    