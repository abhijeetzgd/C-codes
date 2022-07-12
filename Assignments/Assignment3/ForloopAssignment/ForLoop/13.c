/*
Q13. Write a C program to print cubes of odd numbers
ranging between 1 to 50.
Output:
Cube of 1: 1Cube of 3: 27
Cube of 5: 125
.
.
Cube of 49: 117649
*/
#include<stdio.h>
void main(){
  int a,b;
  printf("Enter two values for range\n");
  scanf("%d %d",&a,&b);

  for(int i=a;i<=b;i++){
    if(i%2!=0)
      printf("cube of %d : %d\n",i,i*i*i );
  }
}
