#include<stdio.h>

void main(){

  int marr[][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

  printf("%u\n",&marr[1][2]);//128

  printf("%u\n",marr);//100
  printf("%u\n",marr[1]);//120
  printf("%d\n",marr[1][2]);//8


}
