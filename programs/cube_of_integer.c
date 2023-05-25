#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter the number of terms\n");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        printf("The cube of %d is %d\n",i,(i*i*i));
    }
    return 0;
}