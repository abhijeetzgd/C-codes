//three value pre increment and decrement
#include<stdio.h>
void main(){

	int a=11,b=7,ans=0;
	
	ans=++a + ++a + ++a;
	printf("%d\t%d\n",a,ans)	;//40

	ans=++b + ++b + ++b;
	printf("%d\t%d\n",b,ans)	;//28

	a=11,b=7,ans=0;
	
	ans=--a + --a +--a;
	printf("%d\t%d\n",a,ans)	;//26

	ans=--b + --b+--b;
	printf("%d\t%d\n",b,ans)	;//14



}