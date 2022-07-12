/*Prg5.Write a program to find Maximum between three Numbers.
i/p:1 4 2
o/p:4 is Max number among 1,4 & 2
*/

#include<stdio.h>
void main(){

 int num1,num2,num3;
 printf("Enter 3 Numbers: ");
 scanf("%d %d %d",&num1,&num2,&num3);

        if(num1>=num2 && num1>=num3){
  
         printf("%d is Max number among %d,%d & %d\n",num1,num1,num2,num3) ;  
 
        }
        else if(num2>=num3 && num2>=num1){
  
          printf("%d is Max number among %d,%d & %d\n",num2,num1,num2,num3) ;  

        }
        else{

         printf("%d is Max number among %d,%d & %d\n",num3,num1,num2,num3) ;  

        }

}
