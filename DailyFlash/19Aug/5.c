#include<stdio.h>
void main(){
  int a,b,c;

  printf("Enter three angles of triangle : " );
  scanf("%d%d%d",&a,&b,&c );

  if(a+b+c == 180){

    printf("triangle is valid\n");
  } else {
    printf("Triangle is not valid \n" );
  }

}
