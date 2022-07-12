/*
Program 22: Write a C program to take a number as input and print
series of factorials of numbers ranging up to that number from 1.
Input: 10
Output:

Factorial of 1: 1

Factorial of 2: 2
Factorial of 3: 6
.
.
Factorial of 10: 3628800
*/

 #include <stdio.h>
void main(){

  int n,fact=1,a;
printf("Enter range number for factorial : \n" );
scanf("%d %d",&a,&n);
do{
  fact =1;
  for(int i=1;i<=a;i++){
    fact=fact*i;
  }
  printf("Factorial of %d is %d\n",a,fact );
a++;
}while(a!=n);
}
