/*Program to count the factors of a number*/
#include<stdio.h>
int main()
{
 int i,num,fact=1;
 printf("Enter a number:\n ");
 scanf("%d",&num);
 printf("The count of the factors of %d is:\n",num);
for ( i = 1; i <=num; i++)
{
 if (num % i==0)
 {
  printf("%d\n",i);
 }
 }
    return 0;
}
