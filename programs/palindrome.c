#include <stdio.h>
int main() {
  int a, num,i,rem,rev=0;
  printf("Enter a number\n");
  scanf("%d",&num);
   a=num;
while(num>0)
  {
      rem=num%10;
      rev=rev*10+rem;
      num=num/10;
  }
 if(a==rev)
 {
     printf("%d is a palindrome number\n",a);
 }
 else
 {
     printf("%d is not a palindrome number\n",a);
 }
 
    return 0;
}