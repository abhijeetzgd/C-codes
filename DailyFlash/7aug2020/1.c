/*
write a prg in c to multiply two numbers without actually using
* operator,by using do while loop
*/

#include<stdio.h>
void main(){

  int a,b,temp=0;

  printf("Enter two number for multiplication\n" );
  scanf("%d %d",&a,&b );

  do{
    temp = temp+a;
    b--;
  }while(b!=0);
  printf("multiplication = %d \n",temp );
}
