#include<stdio.h>
void main(){

  char pname[12];
  printf("Enter name : ");
  fgets(pname,20,stdin);
  printf("%s\n",pname);
}
