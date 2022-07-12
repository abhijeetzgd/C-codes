#include<stdio.h>
void main(){

  int n,sum=0;
  printf("Enter a integer : ");
  scanf("%d",&n );
  printf("Sum of all number upto that number =");

  for(int i=0;i<=n;i++){

    sum = sum + i;
  }
  printf("%d\n",sum );
}
