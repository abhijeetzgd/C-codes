#include<stdio.h>
void main(){

   int num,c=1;
   printf("Enter Number : ");
   scanf("%d",&num);

   while(c<=num){

    if(c%2==0)
       printf("%d ",c);
    c++;

   }
  printf("\n");
}
