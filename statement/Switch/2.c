#include<stdio.h>
void main(){
    int a=-2;
  switch(a){
    printf("case required\n" );
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/statement/Switch$ cc 2.c
2.c: In function ‘main’:
2.c:5:5: warning: statement will never be executed [-Wswitch-unreachable]
     printf("case required\n" );
     ^~~~~~~~~~~~~~~~~~~~~~~~~~
          ^
*/
