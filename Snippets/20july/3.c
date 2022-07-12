#include<stdio.h>

#define core2web(a) a

void main(){
  int a=1;
  switch(a){
    case core2web(1):
      printf("PPA\n" );
      break;

    case core2web(2):
      printf("Java\n" );
      break;
  }
  
}
