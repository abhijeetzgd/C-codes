/*
Program 11: Write a C program to take two numbers from user and
print even numbers ranging between those two input numbers.
Input: 10 20
Output: 10 12 14 16 18 20
*/

#include<stdio.h>
void main(){
  int a,n;

  printf("Enter the range \n" );
  scanf("%d %d",&a,&n);

  for(int i =a;i<=n;i++){
    if(i%2 == 0){
      printf("%d\t",i );
    }
  }
  printf("\n" );
}
