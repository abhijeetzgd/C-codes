//two value post increment and decrement
#include<stdio.h>
void main(){

	int a=11,b=10,ans=0;
	
	ans=a++ + a++;
	printf("%d\t%d\n",a,ans)	;//23

	ans=b++ + b++;
	printf("%d\t%d\n",b,ans)	;//21

	a=11,b=7,ans=0;
	
	ans=a++ + a++;
	printf("%d\t%d\n",a,ans)	;//23

	ans=b-- + b--;
	printf("%d\t%d\n",b,ans)	;//13



}