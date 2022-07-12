/*
Program 17: Write a C program to take a number as input and print
whether that is prime number of not.
{Note: Prime number is the one which is divisible by 1 and that number
only}
Input: 41
Output: 41 is prime number!
*/

 #include <stdio.h>
void main(){

  int n,flag=0;
  printf("Enter number : \n" );
  scanf("%d",&n);

  for(int i=2;i<=(n/2)+1;i++){
    if(n%i==0){
      flag = 1;
    }
  }
  if(flag == 0){
    printf("%d is prime number\n",n );

  } else {
    printf("%d is not prime number\n",n );

  }


}
