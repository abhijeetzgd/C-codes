/*
Write a C Program that accept minutes as input from user and display the
total number of hours and minutes.
Input: 452
Output: 7 Hours, 32 Minutes.
*/

#include<stdio.h>
void main(){
  int h,m,m1;
  printf("Enter the number of Minutes " );
  scanf("%d",&m );
  m1 = m%60;
  h = m/60;
  printf("%d Hours, %d Minutes\n",h,m1 );
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$ cc 5.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$ ./a.out
Enter the number of Minutes 601
10 Hours, 1 Minutes
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$ ./a.out
Enter the number of Minutes 65
1 Hours, 5 Minutes
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$
*/
