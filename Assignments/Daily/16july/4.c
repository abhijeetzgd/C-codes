/*
4.Write a C program to take input from user and check whether the number is
Perfect number or not. Using while loop.
{Note: if sum of all perfect divisors of a number is equal to that number then that
number is termed as perfect number}
Input: 6
Output: 6 Is a Perfect Number.
*/

#include<stdio.h>
void main(){
  int a,sum=0,i;
  printf("Enter the number :" );
  scanf("%d",&a );

  i=a/2+1;

  while(i>0){

    if(a%i==0)
      sum = sum + i;
    i--;

  }
  if(a==sum)
    printf("%d is perfect number\n",a );
  else
    printf("It is not perfect Number\n" );
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter the number :3
It is not perfect Number
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter the number :6
6 is perfect number
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter the number :28
28 is perfect number
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter the number :29
It is not perfect Number
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter the number :496
496 is perfect number
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
*/
