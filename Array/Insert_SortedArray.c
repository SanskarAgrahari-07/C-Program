/*Program to insert value in sorted array */
#include <stdio.h>

int main() {
    int num,n,a[10];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of a sorted array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a new element of an array\n");
    scanf("%d",&num);
    
    if(num>a[n-1]){
        a[n]=num;
    }
    else{
    for( int i=0;i<n;i++){
        if(num<a[i]){
            
            for(int j=n;j>i;j--){
                a[j]=a[j-1];
            }
            a[i]=num;
            break;
        }
    }}
  
    printf("\n");
    printf("The new array is\n");
    for(int i=0;i<n+1;i++){
        printf("%d",a[i]);
    }

    return 0;
}
