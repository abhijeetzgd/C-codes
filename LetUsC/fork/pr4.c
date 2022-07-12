#include<stdio.h>
#include<unistd.h>
void main(){
  int pid = fork();
  if(pid == 0){
    printf(" IN CHILD PROCESS \n");
    printf("child: CHILD PID = %d \n ",getpid());
    printf("child: PARENT PID = %d \n ",getppid());
    printf(" VALUE OF PID = %d \n ",pid);

  }
  else{
    printf(" IN PARENT PROCESS \n");
    printf("parent: PARENT PID = %d \n ",getppid());
    printf(" parent: CCHILD PID = %d \n ",pid);


  }

}
/*
OUTPUT
IN PARENT PROCESS
parent: PARENT PID = 7650
 parent: CCHILD PID = 7651
 IN CHILD PROCESS
child: CHILD PID = 7651
child: PARENT PID = 7650


WHEN EVER PROCESS RETURNS FROM CHILD IT ALWAYS RETURNS ZERO



*/
