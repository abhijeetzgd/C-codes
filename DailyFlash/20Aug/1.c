#include<stdio.h>
void main(){
  int a,b,c;
  printf("Entre three sides of Triangle(third is hypo) : \n");
  scanf("%d%d%d",&a,&b,&c);

  if(a*a + b*b == c*c){
    printf("Triangle satisfies Pythagoras theorem\n" );
  } else {
    printf("Triangle does not satisfies Pythagoras theorem\n" );

  }

}
