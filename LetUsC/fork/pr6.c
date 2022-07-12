
#include<stdio.h>
#include<unistd.h>

void main(){

  int pid;
//  pid = fork();
  execl("/bin/ls","tree",NULL);
  printf("HEYBABA");
}
