#include<stdio.h>
void main(){

  int a,b;
  char y;
  do{
  printf("Enter the two number : ");
  scanf("%d %d",&a,&b);

  if(a>b)
    printf("%d is greater \n",a );

  else if(a<b)
    printf("%d is greater\n",b );

  else
    printf("both are same\n");

  printf("\nDo you want to continue,Press y : " );
  scanf(" %c",&y );

}while(y == 'y' || y == 'Y');
}
