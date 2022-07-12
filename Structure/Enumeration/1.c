#include<stdio.h>

enum days{

  sun,mon=13,tue,wed=17,thur,fri=17,sat
};

void main(){
  enum days obj;
  printf("%d\n",obj );
  printf("%d\n",sun );
  printf("%d\n",mon );
  printf("%d\n",tue );
  printf("%d\n",wed );
  printf("%d\n",thur );
  printf("%d\n",fri );
  printf("%d\n",sat );

}
