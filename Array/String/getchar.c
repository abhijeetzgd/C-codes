#include<stdio.h>
void main(){

  char actr[15],ch;
  int index;

  printf("Enter String : ");

  while((ch = getchar())!='\n'){

    actr[index]=ch;
    index++;
  }

  actr[index] = '\0';
  printf("Enter String = %s\n",actr);
}
