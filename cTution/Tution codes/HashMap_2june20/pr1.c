//two value pre increment and decrement
#include<stdio.h>
void main(){

	int a=11,b=7,ans=0;
	
	ans=++a + ++a;
	printf("%d\t%d\n",a,ans)	;//26

	ans=++b + ++b;
	printf("%d\t%d\n",b,ans)	;//18

	a=11,b=7,ans=0;
	
	ans=--a + --a;
	printf("%d\t%d\n",a,ans)	;//18

	ans=--b + --b;
	printf("%d\t%d\n",b,ans)	;//10



}