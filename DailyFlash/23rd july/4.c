#include<stdio.h>
void main(){

  int n=1;

  for (int i=0 ;i<4;i++){

    for(int j=0;j<7;j++){

      if((i+j <=3)  || (j-i >=5)){
        printf("  " );
      }else{
      printf("%d ",n );
      n++;
    }
    }
    printf("\n");
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$ ./a.out
        1
      2 3 4
    5 6 7 8 9
  10 11 12 13 14 15
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$
*/
