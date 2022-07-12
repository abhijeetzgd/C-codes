#include<stdio.h>
void main(){

  int a=10,ans =0;

//pre increment
  ans=++a;
  printf("%d %d\n",a,ans);//11  11

//post increment
a=10;
ans =0;
  ans=a++;
  printf("%d %d\n",a,ans);//11  11

  //pre decrement
  a=10;
  ans =0;

    ans=--a;
    printf("%d %d\n",a,ans);//11  11

  //post decrement
  a=10;
  ans =0;

    ans=a--;
    printf("%d %d\n",a,ans);//11  11


}
