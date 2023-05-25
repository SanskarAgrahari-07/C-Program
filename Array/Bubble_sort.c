/* Bubble Sorting */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n],i,j,t;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("The sorted elements of the array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}