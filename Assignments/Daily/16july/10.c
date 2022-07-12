/*
Program 5. Write a C Program, that prints square of odd numbers and cube of even
numbers. Take lower bound & upper bound of numbers range from user.
Input:
Enter Lower bound of range: 1
Enter Upper bound of range: 5
Output: 1 4 27 16 125
*/

#include<stdio.h>
void main(){
  int lb,hb;

  printf("Enter Lower bound of range: " );
  scanf("%d",&lb );
  printf("Enter Upper bound of range: " );
  scanf("%d",&hb );

  while(lb<=hb){
    if(lb%2==0)
      printf("%d  ",lb*lb*lb );
    else
      printf("%d  ",lb*lb );
      lb++;
    printf("\n");
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ cc 10.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter Lower bound of range: 1
Enter Upper bound of range: 5
1
8
9
64
25
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$

*/
