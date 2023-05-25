#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int a[n],i,new[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The new array is\n");
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]% 5 ==0)
        {
            new[j]=a[i];
             printf("%d\n",new[j]);
            j+=1;
        }
    }
    return 0;
}
       