#include<stdio.h>
int main()
{
    int num ,i, sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
       sum = sum + i;
    }
     printf(" The sum of natural numbers from 1 to %d is %d\n",num,sum);
    return 0;
}