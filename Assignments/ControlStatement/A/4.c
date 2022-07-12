/*
Program 4: Write a C program to take a character from user and
print whether it is in UPPERCASE or lowercase.
Input: A
Output: You entered UPPERCASE character.
*/

#include<stdio.h>
void main(){
  char ch ;
  printf("Enter the character : " );
  scanf("%c",&ch );
  if(ch >'a' && ch<'z'){
    printf("%c is lowercase character\n",ch );
  } else if(ch >'A' && ch<'Z'){
    printf("%c is UPPERCASE character\n",ch );
  } else {
    printf("It is other character than alphabet\n" );
  }
}
