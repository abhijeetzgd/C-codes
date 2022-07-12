#include<stdio.h>
void main(){

  int stud_age[5];
  for(int i =0;i<5;i++){
    printf("%d \t%d \t%p\n",i,stud_age[i],&stud_age[i]);
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Array/Tutution$ cc 8.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Array/Tutution$ ./a.out
0 	857278240 	0x7ffd218cfe90
1 	22048 	0x7ffd218cfe94
2 	857277856 	0x7ffd218cfe98
3 	22048 	0x7ffd218cfe9c
4 	562888592 	0x7ffd218cfea0
*/
