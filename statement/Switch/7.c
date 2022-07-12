#include<stdio.h>
void main(){

  int a=10;
  char ch = 's';
  float f = 20.5;
/*
  switch(a){
    case 10:
      printf("One\n");
      break;
  }

switch(ch){
  case 's':
    printf("Shashi\n");
    break;
}
*/
switch(f){
case 20.5:
  printf("Float value\n");
}

  printf("Outside Switch\n");
}

/*output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/statement/Switch$ cc 7.c
7.c: In function ‘main’:
7.c:20:8: error: switch quantity not an integer
 switch(f){
        ^
7.c:21:1: error: case label does not reduce to an integer constant
 case 20.5:
 ^~~~
*/
