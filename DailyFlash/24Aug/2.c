#include<stdio.h>
void main(){

   int n,sum=0;
   printf("Enter Number : ");
   scanf("%d",&n);

   for(int i=1;i<=n;i++){

      sum=sum+i;
   }
   printf("The sum of first %d natural Numbers: %d\n",n,sum);
}
