/*
Program 2. Write a C program to count number of digits in a number.
{Hint: performing modulus operation by 10 on the number gives us the last digit from
that number}
Input: 13345
Output: 5
*/
#include<stdio.h>
void main(){
  int a,m,d=0;
  printf("Enter a number : " );
  scanf("%d",&a );

  while (a>0){
    a=a/10;
    d++;
  }
  printf("%d\n",d );
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter a number : 123456
6
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter a number : 9797970
7
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
*/
