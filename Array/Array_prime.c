#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n],i,count,j;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The prime numbers of the array are:\n");
    for(i=0;i<n;i++)
    {
    count=0;
    for(j=2;j<a[i]/2;j++)
    {
        if(a[i]%j==0)
        {
        count=count+1;
        }
    }
    if(count==0)
    {
    printf("%d\n",a[i]);
    }
    }
    return 0;
}
       