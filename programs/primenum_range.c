#include <stdio.h>

int main() {
   int low, high,i,j,count;
   printf("Enter the lower limit to be checked\n");
   scanf("%d",&low);
   printf("Enter the higher limit to be checked\n");
   scanf("%d",&high);
   for(i=low;i<=high;i++){
       count=0;
       for(j=1;j<=i;j++)
       {
          if(i % j ==0)
         {
           count+=1;
         }
       }
       if(count==2)
       {
           printf("%d\n",i);
       }
   }

    return 0;
}
