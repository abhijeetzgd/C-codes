#include<stdio.h>
void main(){

  int a;
  char y;

  do{

    printf("Enter a number : ");
    scanf("%d",&a);

    if(a%11 ==0 && a%5 == 0)
      printf("%d is divisible by 5 & 11 \n",a );

    else
      printf("%d is Not  divisible by 5 & 11\n",a);

    printf("\nDo you want to continue,Press y : " );
    scanf(" %c",&y );

}while(y == 'y' || y == 'Y');
}
