#include<stdio.h>
#include<string.h>

long mystrlen(char *str){

  int cnt = 0;
  while(*str != '\0'){

    cnt++;
    str++;
  }
  return cnt;
}



void main(){

  char *str1 = "Core2webtechnology";
  char str2[10] = "Bielearn";

  printf("%ld\n",mystrlen(str1)); //12
  printf("%ld\n",mystrlen(str2)); //8

}
