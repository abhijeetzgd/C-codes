#include<stdio.h>
void main(void){
  int a,b;
  printf("Enter two number : ");
  scanf("%d %d",&a,&b);

  printf("Addition of cubes %d & %d = %d\n",a*a*a,b*b*b,a*a*a+b*b*b);

  printf("Subtraction of squares %d & %d = %d\n",a*a,b*b,a*a-b*b);



}
