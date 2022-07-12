#include<stdio.h>
void main(){

  int a=5,b=6,ans=0;

  ans = a+++b;//Lexical Analysis
//ans = a++ + b
  printf("%d %d %d\n",a,b,ans);//6 6 11

}
