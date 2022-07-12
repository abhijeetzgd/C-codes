#include<stdio.h>

struct batsmen{
  char name[10];
  int jerNo;
  float avg;
}msd= {"abhijeet",7,34.43};

union batsmenn{

  char name[10];
  int jerNo;
  float avg;
}virat= {"abhijeet",18,51.43};


void main(){

  printf("union size = %ld\n",sizeof(virat));//4
  printf("struct size = %ld\n",sizeof(msd));
}
