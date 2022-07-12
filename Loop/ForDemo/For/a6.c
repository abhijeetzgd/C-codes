#include<stdio.h>
void main(){
  int i = 97;
  int cnt=4294960000;

  for(;i<=122;){
    printf("%c= %d\n",i,cnt );
    cnt++;
  }
}
