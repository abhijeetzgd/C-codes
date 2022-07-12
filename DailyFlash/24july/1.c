#include<stdio.h>
void main(){
char ch ='A';
  for(int i=1 ; i<=5 ; i++){

      for(int j=1 ; j<=5 ; j++){

        if((i+j)<=5){
          printf("   ");
        }
        else {
          printf("%c  ",ch );
          ch++;
        }

      }printf("\n");
      ch=ch-1;
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$ cc 1.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$ ./a.out
            A
         A  B
      B  C  D
   D  E  F  G
G  H  I  J  K
*/
