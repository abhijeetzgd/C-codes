#include<stdio.h>
void main(){
  int a,rem,sum;
  printf("Enter a number : " );
  scanf("%d",&a );

  while(a>0){
    rem = a%10;
    a = a/10;
    printf("%d",rem );
  }
  printf("\n" );

}
