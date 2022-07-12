#include<stdio.h>
void main(){
  int x = 7;
  printf("goto statement \n" );

  goodmorning:
      printf("Good morning\n" );
      printf("Have a nice day\n" );

  goto goodmorning;
}
