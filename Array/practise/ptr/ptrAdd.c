#include<stdio.h>
void main(){

  int i=1,*j,*k;
  char a='a',*c;

  j=&i;
  printf("Address of i which stored in j is = %u\n",j);
  printf("value at this address = %d\n",*j);
  j=j+10;
  printf("After increment Address of i which stored in j is = %u\n",j);
  printf("value at this address = %d\n",*j);
  j=j-10;
  printf("now again value at this address = %d\n",*j);

  c  =  &a;
  printf("Address of c = %u\n",c);
  printf("value at this address = %c\n",*c);

  c = c+10;
  printf("New address of c = %u\n",c);
  printf("value at this address = %d\n",*c);
  c=c-10;
  printf("now value at this address = %c\n",*c);

}
