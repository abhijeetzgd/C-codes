#include<stdio.h>

void main(){

  char *str1 = "Core2web";
  char *str2 = "Shashi";

  printf("%ld\n",sizeof(str1) );
  printf("%ld\n",sizeof(str2) );
  printf("%ld\n",sizeof("Core2web") );
  printf("%ld\n",sizeof("Shashi" ));

}
