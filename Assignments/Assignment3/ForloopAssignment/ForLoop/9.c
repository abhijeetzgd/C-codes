/*
Q9. Write a program to print alternative numbers in reverse order between 15 to 30. (without using
if)
Ip -> 15 30
Op -> 30 28 26 24 22 20 18 16
*/

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers\n" );
    scanf("%d %d",&a,&b);

    for(int i=a;i>=b;i=i-2)
      printf("%d ",i);
    printf("\n" );
}
