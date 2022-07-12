#include<stdio.h>
void main(){

  int a;
  char y;

  do{

    printf("Enter a number : ");
    scanf("%d",&a);

    if(a>0)
      printf("%d is greater than zero \n",a );

    else if(a<0)
      printf("%d is Less than Zero\n",a );

    else
      printf("%d is equal to zero\n",a);

    printf("\nDo you want to continue,Press y : " );
    scanf(" %c",&y );

}while(y == 'y' || y == 'Y');
}
