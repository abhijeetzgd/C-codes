#include<stdio.h>
#include<string.h>

char * mystrcpy(char *des,char *src){

  while(*src != '\0'){

    *des = *src;
    des++;
    src++;
  }
  *des  = '\0';
  return " ";
}

void main(){

  char* src = "Abhijeet";
  char des[20];

  puts(src);
  puts(des);
  mystrcpy(des,src);

  puts(src);
  puts(des);

}
