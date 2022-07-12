#include<stdio.h>
#include<unistd.h>

void main(){

  int pid;
  pid = fork();

  if(pid == 0){

      execl("/bin/ls","-al","/etc",NULL);
      printf("Child : After exec()\n");
  }
  else
  printf("Parent Process \n");

}
