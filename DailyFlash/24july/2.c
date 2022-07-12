#include<stdio.h>
void main(){
char ch ='A';
  for(int i=1 ; i<=5 ; i++){

      for(int j=1 ; j<=5 ; j++){

        if((i+j)<=5){
          printf("   ");
        }
        else {
          if((i+j)%2 == 0)
          printf("0  " );
          else
          printf("1  " );

          ch++;
        }

      }printf("\n");
      ch=ch-1;
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
