/*
Program 14: Write a C program to print addition of 1 to 10 with 10
to 1.
Output:

1 + 10 = 11
2 + 9 = 11
3 + 8 = 11
.
.
10 + 1 = 11
*/

#include<stdio.h>
void main(){
  int a,n;
  for(int i =1,j=10;i<=10 && j>=1;i++,j--){

      printf("%d + %d = %d  \n",i,j,i+j);
    }

  printf("\n" );

}
