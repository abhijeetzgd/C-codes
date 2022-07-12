/*
Question 15. Write a Program that check whether the entered character by user is vowel or
Consonant.
Input: A
Output: A is Vowel.
*/
#include<stdio.h>
void main(){

  char a;
  printf("enter the Any character \n" );
  scanf("%c",&a );
  if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
    printf("%c is Vovel\n",a );
  } else {
    printf("%c is not Vovel",a);
  }
}
/*abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Assignment2$ ./a.out
enter the Any character
d
d is not Vovel
*/
