/*Program to check triangle is valid or not*/
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the length of the first side of triangle\n");
scanf("%d", &a);
printf("Enter the length of the second side of triangle\n");
scanf("%d", &b);
printf("Enter the length of the third side of triangle\n");
scanf("%d", &c);
if ((a+b)>c)
{
    if ((b+c)>a)
    {
        if ((a+c)>b)
        {
printf("The given triangle is valid");    
        }
        else
        {
            printf("The triangle is not valid");
        }
    }
    else
    {
        printf("The triangle is not valid");
    }
    
}
else
{
    printf("The triangle is not valid");
}

return 0;
}
