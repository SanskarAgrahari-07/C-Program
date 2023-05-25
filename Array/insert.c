/*Program to insert value in a array*/
#include<stdio.h>
int main()
{
    int a[100],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int i,ele,loc;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the new element\n");
    scanf("%d",&ele);
    printf("Enter the location\n");
    scanf("%d",&loc);
    for(i=n;i>loc-1;i--)
    {
        a[i]=a[i-1];
    }
    a[loc-1]=ele;
    n=n+1;
    printf("The new array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
