/*
Q11. Write a C program to print numbers whose one of
perfect divisor is 4 ranging between 30 to 60.
Output: 32 36 40 44 . . .. 60
*/

#include<stdio.h>
void main(){
  int a,b;
  printf("Enter Two number for range\n");
  scanf("%d %d",&a,&b);

  for(int i=a;i<=b;i++){
    if(i%4==0)
      printf("%d ",i );
  }
  printf("\n" );
}
