/*
Program 3: Write a C Program that accepts a character from user and prints whether
that character is a consonant or a vowel.
Input: Enter Character: a
Output: a is a vowel
*/

#include<stdio.h>
void main(){
  char ch;
  printf("Enter the character: " );
  scanf("%c",&ch );

  if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U' || ch == 'I'){
    printf("%c is Vowel\n",ch );
  } else {
    printf("%c is Consonant \n",ch );
  }

}
