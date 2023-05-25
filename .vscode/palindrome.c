#include<stdio.h>
int main()
{
    int num,rem,rev=0,original;
    printf("Enter the number\n");
    scanf("%d",&num);
    original=num;
    while (num!=0)
    {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
    }
    if(original==rev)
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("The number is not paindrome\n");
    }
    return 0;
}