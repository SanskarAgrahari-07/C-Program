#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int a[n],i,j,index;
    printf("Enter the  elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        int count =0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
               count=count+j; 
            }
        }
        if(count==a[i])
        {
            for(i=i+1;i<n;i++)
            {
                a[i-1]=a[i];
            
            }
      n=n-1;
        }
        // printf(" the number is%d\n",a[i]);
    }
    for(i=0;i<n;i++)
    {
        int count =0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
               count=count+j; 
            }
        }
        if(count==a[i])
        {
            for(i=i+1;i<n;i++)
            {
                a[i-1]=a[i];
            
            }
      n=n-1;
        }
        // printf(" the number is%d\n",a[i]);
    }
    printf("The new Array is \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    
    return 0;
}
