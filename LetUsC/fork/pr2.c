#include<unistd.h>
#include<stdio.h>
void main()
{
  int pid;
  pid = fork();
  if(pid==0){
    printf("%d\n",pid);
    printf("in if child process\n ");

  }
  else{
    printf("%d\n",pid);
    printf("in parent statement\n ");


  }

}
