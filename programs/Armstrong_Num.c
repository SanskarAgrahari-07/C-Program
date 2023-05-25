#include <stdio.h>
#include<math.h>
int main() 
{
 int num,i,count=0;
 printf("Enter a number\n");
 scanf("%d",&num);
 int a=num;
 int b= num;
 while(num>0)
  {
       count=count+1;
      num=num/10;
  }
  int rem,n=0;
  while(a>0)
  {
  rem=a%10;
  n=n+pow(rem,count);
  a=a/10;
  }
  if(b==n){
    printf("The number is armstrong\n ");
}
else{
    printf("The number is not an armstrong number\n");
}
  return 0;
}