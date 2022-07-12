#include<stdio.h>
void main(){
  int number=10;
  if(number!=0 && number>0){
    printf("%d is a positive no",number);
    number=-5;
  }
  if(number<0 ){
    printf("%d is a negtive no",number);
    number=0;
  }
  if(number==0){
    printf("number is zero");
    number=15;
  }
  if(number%4==0);{
    printf("%d is divisible by 4",number);
  }
}
