#include<stdio.h>
void main(){
  for(int i=1;i<=20;i++){
    if(i%5!=0){
      printf("%d not divisible by 5 \n",i);
    } else {
      printf("%d is divisible by 5\n",i );
    }
  }
}
/*
output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Loop/ForDemo$ cc 5.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Loop/ForDemo$ ./a.out
1 not divisible by 5
2 not divisible by 5
3 not divisible by 5
4 not divisible by 5
5 is divisible by 5
6 not divisible by 5
7 not divisible by 5
8 not divisible by 5
9 not divisible by 5
10 is divisible by 5
11 not divisible by 5
12 not divisible by 5
13 not divisible by 5
14 not divisible by 5
15 is divisible by 5
16 not divisible by 5
17 not divisible by 5
18 not divisible by 5
19 not divisible by 5
20 is divisible by 5
*/
