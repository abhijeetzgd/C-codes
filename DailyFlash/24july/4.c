#include<stdio.h>
void main(){

for(char i='A' ; i<='E' ; i++){

      for(char j='A' ; j<='E' ; j++){

        if((i+j)<=133){
          printf("   ");
        }
        else {
          printf("%c  ",j );

        }

      }printf("\n");

  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$ ./a.out
            E
         D  E
      C  D  E
   B  C  D  E
A  B  C  D  E
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$
*/
