/*
Program 4. Write a C Program to print the countdown of days to submit the
assignment
Input: Enter No of days to complete the assignment: 7
Output:
7 days remaining
6 days remaining
5 days remaining
.
.
1 days remaining
0 days Assignment is Overdue
*/
#include<stdio.h>
void main(void){
  int a;
  printf("Enter number of days to complete assignment: " );
  scanf("%d",&a );

  while (a>0){
    printf("%d days are remaining \n",a );
    a--;
  }
printf("0 days Assignment is Overdue\n" );
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ cc 9.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter number of days to complete assignment: 7
7 days are remaining
6 days are remaining
5 days are remaining
4 days are remaining
3 days are remaining
2 days are remaining
1 days are remaining
0 days Assignment is Overdue
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$
*/
