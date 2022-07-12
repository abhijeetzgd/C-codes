#include<stdio.h>
void main(){
  for(int i=0;i<5;i++){
    char ch='a';
    for(int j=0;j<5;j++){
      if(i+j<=3)
        printf("   ");
      else {
        printf("%c  ",ch );
        ch++;
    }}
    printf("\n");
  }
}
/*
a
a  b
a  b  c
a  b  c  d
a  b  c  d  e
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/DailyFlash$
*/
