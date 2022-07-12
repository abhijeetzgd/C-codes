/*
Program 11: Write a C program that has an array of integers take size of array from user and
elements too, Check whether each element in array is either palindrome number or strong
number if fails to fit in these two then it should check that whether that number is odd or even.
print the result accordingly.
{ Note : Separate Parametrized function should be used for executions && can also use return
statements to validate function work }
Input : Size of Array : 7
121 145 2 153 12321 44 1
Output :
Element 121 is a Palindrome Number.
Element 145 is a Strong Number.
Element 2 is a Strong Number.
Element 153 is a Odd Number.
Element 12321 is a Palindrome Number.
Element 44 is a Even Number.
Element 1 is a Strong Number.
Test Cases : 0. Size of array should be positive odd number ranging between 1 to 10 only if not
then program should ask to re-enter size.
1. If one function returns true for particular element then it should not go for next
function to check for.
*/


#include<stdio.h>

int isPalindrome(int n){
  int m=n,rem,sum=0;
  while(n!=0){

    rem = n%10;
    sum = sum*10+rem;
    n = n/10;
  }

  if(sum == m){
    return 1;
  }else{
    return 0;
  }

}

int strong(int n){

  int fact=1,rem,m=n,sum=0;

  while(n!=0){
    fact =  1;
    rem = n%10;

    for(int i=1;i<=rem;i++){

    fact = fact * i;
  }
//  printf("sum = %d\n",fact);

  sum = sum + fact;
  n=n/10;
}

if(sum == m){
  return 1;
}else{
  return 0;
}
}

void main(){

  int n;
  printf("Enter size of array");
  scanf("%d",&n);
  /*if(n>10 && n<0){
    printf("re-enter size of array");
    scanf("%d",&n);
  }*/
  int arr[n];

  printf("Enter elements of array");
  for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){
    int p=strong(arr[i]);

    if(p == 1){
      printf("%d is strong\n",arr[i]);
      continue;
    }else{
      p = isPalindrome(arr[i]);

      if(p == 1){
        printf("%d is palindrome number\n",arr[i]);
        continue;
      }else{
        if(arr[i]%2==0){
          printf("%d is even number\n",arr[i]);
        }else{
          printf("%d is odd number\n",arr[i]);
        }
      }
    }

  }

}
