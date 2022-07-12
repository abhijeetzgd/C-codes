#include<stdio.h>

union batsmen{

  char name[10];
  int jerNo;
  float avg;
}msd= {"dhoni",7,34.43};


void main(){

  printf("%s\n",msd.name);//4
  printf("%d\n",msd.jerNo);//4
  printf("%f\n",msd.avg);//4

  //printf("struct size = %ld\n",sizeof(msd));
}
