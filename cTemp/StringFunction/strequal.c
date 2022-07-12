#include<stdio.h>
#include<string.h>

void main(){

  char *str1  = "SHASHI";
  char *str2 = "Shashi";

  int ret = strcmp(str1,str2);

  if(ret == 0)
      printf("Strings are equal\n");
  else
      printf("Strings are not equal\n");

}
