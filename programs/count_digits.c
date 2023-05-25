#include <stdio.h>
int main() 
{
 int num,i,count=0;
 printf("Enter a number\n");
 scanf("%d",&num);
 while(num>0)
  {
        count=count+1;
      num=num/10;
    
  }
  printf("The count of the digits is %d\n",count);
  return 0;
}