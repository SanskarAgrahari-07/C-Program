#include<stdio.h>
int main()
 {
    int l,b,h,volume;
    printf("Enter the length of the cube \n");
    scanf("%d",&l);
    printf("Enter the breadthb of the cube \n");
    scanf("%d",&b);
    printf("Enter the height of the cube \n");
    scanf("%d",&h);
    volume = l * b * h ;
    printf("The volume of the cube is %d \n",volume);
    return 0;
}