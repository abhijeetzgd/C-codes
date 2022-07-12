///Calculation of simple intrest

#include<stdio.h>
void main()
{
  int p,n;
  float r,si;
  p=1000;
  n=3;
  r=10;

  si=p*n*r/100;

  printf("%d value of simple intrest",si);

}
/*

pr2.c: In function ‘main’:
pr2.c:14:12: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
   printf("%d value of simple intrest",si);
           ~^
           %f

and will print some non real value apart from required ans

*/
