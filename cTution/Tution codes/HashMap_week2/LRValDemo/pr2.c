#include<stdio.h>
void main(){

  int x=10;

  const int y=20;
  print("%d\n%d",x,y);
  x=x+1;
//  y=y+1;//dont allowss us to change the value of constant variable but we can read the value
  /*pr2.c:8:4: error: assignment of read-only variable ‘y’
   y=y+1;//dont allowss us to change the value of constant variable
   */


  print("%d\n%d",x,y);

}
op-10
20
11
20
