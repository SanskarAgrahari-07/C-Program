#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of the rows\n");
    scanf("%d",&r);
    printf("Enter the number of the columns\n");
    scanf("%d",&c);
    int a[r][c],i,j,n;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Element-a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
      for(i=0;i<r;i++)
    {
        int count=0;
        for(j=0;j<c;j++)
        {
           if(i%2==0)
           {
               if(a[i][j]%2==0)
               {
                   count+=1;
               }
           }
           else
           {
              int pro=1;
              if(a[i][j]%2!=0)
              {
                  n=a[i][j];
                  while(n>0)
                  {
                      pro=pro*n;
                      n=n-1;
                  }
              a[i][j]=pro;
              }
          }
        }
               printf("The count of the even numbers in %d row is %d\n",i,count);
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
        
    
}