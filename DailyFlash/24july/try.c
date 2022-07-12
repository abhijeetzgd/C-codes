#include<stdio.h>
void main(){

  for(int i=1 ; i<=5 ; i++){
      int n =1;
      for(int j=1 ; j<=5 ; j++){

        if((i+j)<=5){
          printf("   ");
        }
        else {
          printf("%d  ",n );
          n++;
        }

      }printf("\n");

  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$ cc 2.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$ ./a.out
            0
         0  1
      0  1  0
   0  1  0  1
0  1  0  1  0
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$

*/
