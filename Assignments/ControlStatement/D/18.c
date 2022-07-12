/*
Program 18: Write a C program to take a number as input and print
whether that is perfect number of not.
{Note: Perfect number is the one whose perfect divisor’s addition is
equal to that number.
6 is perfect number = 1 + 2 + 3 = 6}
Input: 6
Output: 6 is perfect number!
*/

 #include <stdio.h>
void main(){

  int n,flag=0,sum=0;
  printf("Enter number : \n" );
  scanf("%d",&n);

  for(int i=1;i<=(n/2)+1;i++){
    if(n%i==0){
      sum = sum + i;
      flag = 1;
    }
  }

  if(n == sum){
    printf("%d is perfect number\n",n );

  } else {
    printf("%d is not perfect number\n",n );

  }
}
