#include<stdio.h>
int main()
{
    int num, i, sum=0;
    printf("Enter the number of terms\n");
    scanf("%d",&num);
     printf("The given odd numbers are: ");
    for ( i = 1; i <=num; i++)
    {
       
        printf( "%d ",(2*i-1));
        sum = sum + (2*i-1);
    }
    printf("\nThe sum of given odd numbers is %d",sum);
    return 0;
}