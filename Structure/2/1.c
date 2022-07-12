#include<stdio.h>
#pragma pack(2)
void main(){

  struct palyer {

    int jercy;
    float avg;
    char grade;
  }obj1;

  printf("%ld\n",sizeof(obj1));
}
