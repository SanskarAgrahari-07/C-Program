#include<stdio.h>
int main(){
    int a, b,result;
    char ch;
    printf("Enter any operands:\n +\t -\t * \t/\n");
    scanf("%c",&ch);
    printf("Enter any two number \n");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case'+':
        result = a+b ;
        break;
        case'-':
        result = a - b;
        break;
        case'*':
        result = a* b ;
        break;
        case'/':
        result = a/b;
        break;
    }
    printf("The final result is %d \n",result);
    return 0;

    }
