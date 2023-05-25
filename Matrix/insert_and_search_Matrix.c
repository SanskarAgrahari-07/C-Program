#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    printf("Enter the number of columns\n");
    scanf("%d",&c);
    int a[r][c],count=0,num;
    printf("Enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the key element\n");
    scanf("%d",&num);
    for(i=0;i<r;i++)
    { 
        for(j=0;j<c;j++)
        {
            if(a[i][j]==num)
            {
            count+=1;
            printf("Your key element is in %d row and %d column\n",i,j);
            }
        }
    }
            printf("The frequency of the key element is %d\n",count);    
    
    return 0;
    
}
