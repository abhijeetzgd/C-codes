/*
Program 2: Write a C Program to take character from user and print whether it's in
upper case or in lower case.
Input: A
Output: Entered character is UPPERCASE character
*/

#include<stdio.h>
void main(){
  char ch;
  printf("Enter character: " );
  scanf("%c",&ch );
  for(int i=ch;i<128;i++){
    if(i>=65 && i<=90){
      printf("Entered character is UPPERCASE character\n");
      break;
    }
    if(i<=122 && i>=97) {
      printf("Entered character is LOWERCASE character\n");
      break;
    }
  }

}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$ ./a.out
Enter character: w
Entered character is LOWERCASE character
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$ ./a.out
Enter character: A
Entered character is UPPERCASE character
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$


*/
