/*
Question 16. Write a Program that detects whether the entered character is UPPER CASE,
lower case or a Special Character.
Input: *
Output: * is a Special Character.
*/

#include<stdio.h>
void main(){
  char a;
  printf("Enter any character\n" );
  scanf("%c",&a );
  if (a>=65 && a<91){
    printf("%c is UPPER case\n",a );
  }
  else if(a>=97 && a<123){
    printf("%c is lower case \n",a );
  }
  else if(a>=48 && a<=57){
    printf("%c is Digit\n", a);
  }
  else{
    printf("%c is Special character\n",a);
  }

}
