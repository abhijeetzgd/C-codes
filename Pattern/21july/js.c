#include<stdio.h>
void main(){

  char ch ='A';
  int sum = 1;
  for(int i=1;i<=5;i++){

    for(int j=5;j>=i;j--){

      if(j%2==0){
        printf("%d\t",sum);
        sum ++;
        ch++;
      } else {
        printf("%c\t",ch);
        ch++;
        sum++;
      }
    }
//    sum --;
    printf("\n" );
  }


}
