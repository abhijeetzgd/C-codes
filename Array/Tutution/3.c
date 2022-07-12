#include<stdio.h>
void main(){

  int jerNo[5] = {11,7,45,12,10};             //size [5]* 4 = 20

  float avg []= {49.90,54.30,45.50,47.54,50.52};
  int run[5];
  int x = 10;
  int error[];            //error-array size missing


  printf("%ld\n",sizeof(x) );//4
  printf("%ld\n",sizeof(avg) );//20
  printf("%ld\n",sizeof(jerNo) );//20
  printf("%ld\n",sizeof(run) );//20

}
