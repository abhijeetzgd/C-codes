#include<stdio.h>
void main(){

  for(int i=1 ; i<=5 ; i++){
      int n=i;
      for(int j=1 ; j<=5 ; j++){

        if((i+j)<=5){
          printf("   ");
        }
        else {
          printf("%d  ",n );
          n--;
        }

      }printf("\n");

  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$ ./a.out
            1
         2  1
      3  2  1
   4  3  2  1
5  4  3  2  1
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$

*/
