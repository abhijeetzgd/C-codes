#include<stdio.h>
void main(){

  int a=10,b=20,sum=0;
  const int x=1,y=2;

  sum=a+b+x+y;
  printf("%d\n",sum);

  a++;
  b++;
  x++;
  y++;

  sum=a+b+x+y;

  printf("%d\n",sum);

}
/*
prg1.c:12:4: error: increment of read-only variable ‘x’
   x++;
    ^~
prg1.c:13:4: error: increment of read-only variable ‘y’
   y++;
    ^~
*/

//we cant change value of constant variable but we can read it
