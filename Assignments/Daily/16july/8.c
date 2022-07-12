/*
Program 3: Write a C Program which takes a number as input from user if number is
even print that number in reverse order to 1 and if the number is odd print that
number in reverse order by difference two to 1.
Input: 6
Output: 6 5 4 3 2 1
or
Input: 7
Output: 7 5 3 1.
*/

#include<stdio.h>
void main(){
  int a;
  printf("Enter number : ");
  scanf("%d",&a );
  if(a%2==0)
    while(a>0){
      printf("%d ",a);
      a--;
    }
  else
      while(a>0){

          printf("%d ",a);
          a--;
          a--;
      }

  printf("\n" );
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ cc 8.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter number : 12
12 11 10 9 8 7 6 5 4 3 2 1
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter number : 13
13 11 9 7 5 3 1
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$

*/
