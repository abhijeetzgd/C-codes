#include<stdio.h>
void main(void){
  int a,b;
  printf("Enter two number : ");
  scanf("%d %d",&a,&b);

  printf("Addition of %d & %d = %d\n",a,b,a+b);

  if(a>b){
    printf("Subtraction of %d & %d = %d\n",a,b,a-b);

  }else {
    printf("Subtraction of %d & %d = %d\n",a,b,b-a);

  }

}
