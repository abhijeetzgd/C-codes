/*
Program 19: Write a C program to take a character as input and
print whether that character is vowel or consonant.
Input: a
Output: a is vowel.
*/

 #include <stdio.h>
void main(){

char ch;
  printf("Enter a character : \n" );
  scanf("%c",&ch);

  if(ch == 'a'||ch == 'e'||ch =='o'||ch =='i'||ch =='u'||ch =='A'||ch =='E'||ch =='O'||ch =='I'||ch =='U'){
    printf("%c is vovel\n",ch );
  } else {
    printf("%c is consonant\n",ch );

  }

  }
