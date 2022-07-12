/*
Question 14. Write a Program to check whether the number N Entered by ranges between
25 to 50, Print the appropriate statements.
Core2Web Technologies
5Input: 15
Output: 15 Doesn’t belong in the range of 25 to 50.
*/

#include<stdio.h>
void main(){

  int n;
  printf("enter the value of N\n" );
  scanf("%d",&n );

  if(n>25 && n<50){
    printf("%d belong to range 25 to 50\n",n );
  } else {
    printf("%d Doesn't belong in the range of 25 to 50\n",n);
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Assignment2$ ./a.out
enter the value of N
20
20 Doesn't belong in the range of 25 to 50
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Assignment2$
*/
