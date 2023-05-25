// Program to know the frequency of the element of a array
#include <stdio.h>
int main()
{
int n;
printf("Enter the length of array\n");
scanf("%d",&n);
int a[n],i,j;
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
while (i<n)
{
    if(a[i]!='\0')
    {
      int count=1;
      for(j=i+1;j<n;j++)
       {
         if(a[i]==a[j])
         {
            count+=1;
            a[j]='\0';
          }
       }
        
    printf("The occurence of %d is %d\n",a[i],count);
    }
    i++;
}

    return 0;
}
