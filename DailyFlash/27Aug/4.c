#include<stdio.h>
void main(void){

  int a,b;
  char ch;

  printf("Enter two number : ");
  scanf("%d %d",&a,&b);

  printf("Which operation do you want to perform : ");
  scanf(" %c",&ch );

  switch (ch){
    case '+':
    printf("Addition of %d & %d = %d\n",a,b,a+b);
    break;

    case '-':
    printf("Subtraction of %d & %d = %d\n",a,b,a-b);
    break;

    case '*':
    printf("Multiplication of %d & %d = %d\n",a,b,a*b);
    break;

    case '/':
    printf("Division of %d & %d = %d\n",a,b,a/b);
    break;

  }

}
