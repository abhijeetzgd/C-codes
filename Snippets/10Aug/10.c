#include<stdio.h>

int main(){

  int i = 0;

  do{

    i++;

    if(i==3)
    continue;

    printf("In Loop\n" );
  } while(i<3);

  printf("%d\n",i );

  }
