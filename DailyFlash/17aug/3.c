#include<stdio.h>
void main(){

  int a;
  char y;

  do{

    printf("Enter a number : ");
    scanf("%d",&a);

    if(a%2 == 0)
      printf("%d is even number \n",a );

    else
      printf("%d is odd number\n",a);

    printf("\nDo you want to continue,Press y : " );
    scanf(" %c",&y );

}while(y == 'y' || y == 'Y');
}
