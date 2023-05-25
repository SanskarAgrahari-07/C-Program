#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n],i,t,j;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
   }
   printf("The second largest element of the array is %d\n",a[n-2]);
    return 0;
}
       