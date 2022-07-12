#include<stdio.h>
void main(){

  int outer = 1;
  int sum = 1;
  char ch ='A';

  while (outer <= 5){

    int inner=5;

    while(inner >= outer){

      if(inner % 2==0){
        printf("%d\t",sum);
        sum ++;
        ch ++;
      } else {
        printf("%c\t",ch);
        sum++;
        ch ++;

      }
      inner --;
    }
    printf("\n" );
    outer ++;
  }
}
