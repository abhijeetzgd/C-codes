/*

Program 16: Write a C program to take a number as input and
calculate factorial of that number.
Input: 5
Output: factorial of 5 is 25
*/

 #include <stdio.h>
void main(){

  int n,fact=1;
printf("Enter number for factorial : \n" );
scanf("%d",&n);
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  printf("Factorial of %d is %d\n",n,fact );
}
