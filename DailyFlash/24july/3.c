#include<stdio.h>
void main(){
  int num =6;
  for(int i=5 ; i>=1 ; i--){
    num = i;

    for(int j=5 ; j>=i ; j--){

      printf("%d\t",num*num );
      num ++;
    }
    //num--;
    printf("\n" );

  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$ ./a.out
25
16	25
9	16	25
4	9	16	25
1	4	9	16	25
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash/24july$
*/
