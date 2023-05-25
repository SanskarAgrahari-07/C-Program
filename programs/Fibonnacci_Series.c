#include <stdio.h>
int main()
{
 int n,i,a,b,c;
 printf("Enter the number of the terms:");
 scanf("%d",&n);
 a=0;
 b=1;
 for(i=1;i<=n;i++)
 {
     printf("%d\n",a);
     c=a+b;
     b=a;
     a=c;
 }
    return 0;
}
