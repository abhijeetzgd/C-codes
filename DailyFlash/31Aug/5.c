#include<stdio.h>
void main(){

  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  printf("Divisors of %d are \n",a );
  for(int i=1;i<a;i++){
    if(a%i==0 )
      printf("%d ",i);
    }
  printf("\n" );
}
