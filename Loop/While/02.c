#include<stdio.h>
void main(){
  int i=01;
  while(i <= 100){
    if(i%8==0){
      printf("%d is divisible by 8.\n",i );
    }
    i++;
  }
}
/*output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Loop/While$ cc 02.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Loop/While$ ./a.out
8 is divisible by 8.
16 is divisible by 8.
24 is divisible by 8.
32 is divisible by 8.
40 is divisible by 8.
48 is divisible by 8.
56 is divisible by 8.
64 is divisible by 8.
72 is divisible by 8.
80 is divisible by 8.
88 is divisible by 8.
96 is divisible by 8.
*/
