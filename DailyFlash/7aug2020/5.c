/*
take number print it
exit when user enter pallindrom number
*/

#include<stdio.h>
void main(){

  int t,n=0,sum=0,temp,rem,rem1,rem2,flag;

  do{
    flag =0;
    printf("Enter a number\n" );
    scanf("%d",&n);
    temp = n;
    t=n;
    sum =0;
    while(n>0){

      rem = n % 10;
      sum = sum*10 + rem;
      n = n/10;
    }



    if(temp == sum){
      printf("Exit..\n entered number is pallindrom\n" );
      break;
    } else {
      printf("%d\n", t);
    }

  }while(1);


}
