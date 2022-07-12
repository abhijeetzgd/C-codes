/*
Program 2: .Write a C Program to print the character is vowel or consonant from ‘A’
to ‘Z’. Take the lower bound & upper bound of characters range from user.
Input:
Lower Bound of Range: C
Upper Bound of Range: F
Output:
C is Consonant
D is Consonant
E is Vowel
F is Consonant
*/

#include<stdio.h>
void main(){
  char lb,hb;
  printf("Lower Bound of Range: " );
  scanf("%c",&lb );
  printf("Upper Bound of Range: " );
  scanf(" %c",&hb );

  while(lb<=hb){
    printf("%c\n",lb );
    lb++;
  }

}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Lower Bound of Range: A
Upper Bound of Range: D
A
B
C
D
*/
