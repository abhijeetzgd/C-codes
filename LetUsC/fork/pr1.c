#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
void main(){

  int pid;
  printf("Before Forking\n");
  fork();
  printf("After Forking\n");


}
