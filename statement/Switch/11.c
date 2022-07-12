#include<stdio.h>
void main(){

  int a=65;

  switch(a){
    case 'A' :
      printf("A-case\n");
      break;
    case 'b':
      printf("B-case\n" );
      break;
    case '65':
      printf("65-case\n");
      break;
  }
  printf("Outofcase\n" );
}/*abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/statement/Switch$ cc 11.c
11.c: In function ‘main’:
11.c:13:5: error: duplicate case value
     case 65:
     ^~~~
11.c:7:5: note: previously used here
     case 'A' :
     ^~~~
*/
