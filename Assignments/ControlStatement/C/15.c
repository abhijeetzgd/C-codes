/*
Program 15: Write a C program to print numbers whose one of
perfect divisor is 4 ranging between 30 to 60.
Output: 32 36 40 44 . . .. 60
*/

#include<stdio.h>
void main(){
  int a,n;

printf("Enter the range\n" );
scanf("%d %d",&a,&n );

for(int i=a;i<=n;i++){

    if(i%4 ==0){
      printf("%d\t",i );
    }
}
  printf("\n" );

}
