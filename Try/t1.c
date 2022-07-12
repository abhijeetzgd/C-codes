#include<stdio.h>

void myFunc(int x){
  if(x>0) myFunc(--x);
  printf("%d, ",x);
}
int main(){
  myFunc(5);
  return 0;
}
