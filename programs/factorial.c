#include<stdio.h>
int main()
{
    int num, i, p=1;
    printf("Enter a number \n");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        p=p*i;
    }
    printf("The factorial of %d is %d \n",num,p);
    return 0;
}