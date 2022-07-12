/*
Program 21: Write a C program to take a number as input and print
series of prime numbers ranging up to that number from 1.
Input: 20
Output: 2 3 5 7 11 13 17 19
*/

 #include <stdio.h>
void main(){

  int n,flag=0,a;
  printf("Enter range for prime number: \n" );
  scanf("%d %d",&a,&n);
  printf("Prime numbers are\n" );

do{
  flag =0;
  for(int i=2;i<=(a/2)+1;i++){
    if(a%i==0){
      flag = 1;
    }
  }
  if(flag == 0){
    printf("%d\t",a );

  }
  a++;
}while(a!=n);
printf("\n" );
}
