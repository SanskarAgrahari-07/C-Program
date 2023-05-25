/*Program to check the alphabet is uppercase or lowercase*/
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the alphabet\n");
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z')
    {
printf("Uppercase\n");
    }
    else{
        printf("Lowercase\n");
    }
    return 0;
    
    }
