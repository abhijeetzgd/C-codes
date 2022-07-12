/*
Q8. Write a program to print alphabets in reverse order between y to j

Ip -> y j
Op -> y x w v u ... j
*/

#include<stdio.h>
void main(){
  char ch1,ch2;
  printf("enter two char\n");
  scanf("%c %c",&ch2, &ch1);

  for(int i=ch2;i>=ch1;i--)
    printf("%c ",i);

printf("\n" );

}
