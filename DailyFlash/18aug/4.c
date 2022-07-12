/*write a Program to print Pattern.
i/p:
o/p:
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1 
*/

#include<stdio.h>
void main(){

  int rows,cols;
   printf("Enter no of rows & cols :");
   scanf("%d %d",&rows,&cols);

   for(int i=1;i<=rows;i++){

     for(int j=1;j<=cols;j++){

        printf("* ");


      }
     printf("\n");
  
   }
}
