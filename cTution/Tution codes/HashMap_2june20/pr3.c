//three value post increment and decrement
#include<stdio.h>
void main(){

	int a=11,b=10,ans=0;
	
	ans=a++ + a++ + a++;
	printf("%d\t%d\n",a,ans)	;//36

	ans=b++ + b++ + b++;
	printf("%d\t%d\n",b,ans)	;//33

	a=11,b=7,ans=0;
	
	ans=a-- + a-- + a--;
	printf("%d\t%d\n",a,ans)	;//30

	ans=b-- + b-- - b--;
	printf("%d\t%d\n",b,ans)	;//08



}