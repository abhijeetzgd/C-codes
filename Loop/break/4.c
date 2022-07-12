#include<stdio.h>
void main(){
  int num=0,m=0;

  while(num<=20){
    printf("Enter the number : " );
    scanf("%d",&m );
    if(m%4==0 && m%10==0){
      printf("Number %d is divisible by 4 and 10\n",m );
      break;
    } else {
      printf("number is %d \n",m );
    }
    num++;
  }
      printf("Out of while\n" );
  }
