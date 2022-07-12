#include<stdio.h>

void main(){

  char str1[] = {'C','o','r','e','2','w','e','b'};
  char str2[] = {'S','h','a','s','h','i'};

  printf("%ld\n",sizeof(str1) );
  printf("%ld\n",sizeof(str2) );
  printf("%ld\n",sizeof("Core2web") );
  printf("%ld\n",sizeof("Shashi" ));

}
