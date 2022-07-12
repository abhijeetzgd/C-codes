/*
Program 5. Write a program to print the count of even numbers which are divisible
by 5 from 1 to 50 .
Output: 10 ,20 ,30 ,40 ,50
*/

#include<stdio.h>
void main(){
  int a,z;
  printf("Enter two values for range :" );
  scanf("%d %d",&a,&z );

  while(a<=z){
    if(a%5==0)
      printf("%d ",a );
      a++;

  }
printf("\n");
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter two values for range :1 50
5 10 15 20 25 30 35 40 45 50
*/
