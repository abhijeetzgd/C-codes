#include<stdio.h>
void main(void){

  int a,b;
  char ch;

  printf("Enter number of rows and cols : ");
  scanf("%d %d",&a,&b);

  for(int i=1;i<=a;i++){

    for(int j=1;j<=i;j++){

      printf("* " );
    }printf("\n" );
  }

}
