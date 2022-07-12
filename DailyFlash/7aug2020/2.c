/*
take int from user ,and print exit when prime number enter
*/
#include<stdio.h>
void main(){

  int n,flag;

do{
  flag =0;
  printf("Enter a number : " );
  scanf("%d",&n);

  for(int i =2;i<n/2+1;i++){

    if(n%i == 0){
      flag =1;
    }
  }
  if(flag == 1){
    printf("Entered number is %d\n",n );
  } else {
    printf("Entered number is prime number %d\n exit...\n",n );
    break;
  }
}while(1);
}
