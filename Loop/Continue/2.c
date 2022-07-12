#include<stdio.h>
void main(){
int  a=0;
  while(a<101){
    a++;
    if(a%5==0 && a%15==0){
      break;
    } else {
      printf("%d\n",a );
      continue;
    }
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Loop/Continue$ ./a.out
1
2
3
4
5
6
7
8
9
10
11
12
13
14
*/
