#include<stdio.h>
void main(void){
  int a,b;
  printf("Enter two number : ");
  scanf("%d %d",&a,&b);

  printf("Multiplication of %d & %d = %d\n",a,b,a*b);

  if(a>b){
    printf("Division of %d & %d = %d\n",a,b,a/b);

  }else {
    printf("Division of %d & %d = %d\n",a,b,b/a);

  }

}
