/*
Program 12: Write a C program to print cubes of odd numbers
ranging between 1 to 50.
Output:

Cube of 1: 1
Cube of 3: 27
Cube of 5: 125
.
.
Cube of 49: 117649
*/

#include<stdio.h>
void main(){
  int a,n;

  printf("Enter the range \n" );
  scanf("%d %d",&a,&n);

  for(int i =a;i<=n;i++){
    if(i%2 != 0){
      printf("cube of %d is %d\n",i,i*i*i );
    }
  }
  printf("\n" );
}
