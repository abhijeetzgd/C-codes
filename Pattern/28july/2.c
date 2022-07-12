#include<stdio.h>
void main(){

  for(int i=1;i<=5;i++){

    char ch ='A';
    for(int j=1;j<=5;j++){

      if(i-j > 0){

        printf("   " );
      } else {

        printf("%c  ",ch );
        ch++;
      }
    } printf("\n" );
  }
}
