#include<stdio.h>

void mystrcat(char* str1,char *str2){

  while(*str1 != '\0'){
    str1++;
  }
  while(*str2 !='\0'){
    *str1 = *str2;
    str1++;
    str2++;
  }
  *str1='\0';
}

void main(){

  char str1[20]="Core2web";
  char str2[20]="technology";

  puts(str1);
  puts(str2);
  mystrcat(str1,str2);

  puts(str1);
  puts(str2);

}
