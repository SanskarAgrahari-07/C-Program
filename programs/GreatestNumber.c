#include<stdio.h>
int main()
{
int num1, num2, num3;
printf("Enter the three numbers\n");
scanf("%d%d%d", &num1,&num2,&num3);
if (num1>num2 && num1>num3)
{
    printf("%d is the greatest number", num1);
}
if (num2>num1 && num2>num3)
{
    printf("%d is the greatest number", num2);
}
else
 {
printf("%d is the greatest number", num3);
}
return 0;

}