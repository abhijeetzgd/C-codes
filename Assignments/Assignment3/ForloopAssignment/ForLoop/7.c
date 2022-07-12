/*
Q7. Write a program to print multiples of 6 upto 60.
Ip -> Enter a number - 6
Enter limit - 60
Op -> 6 ,12 ,18 , 24,...,60
*/

#include<stdio.h>
void main(){
  int s,e;
    printf("Enter a number\n" );
    scanf("%d",&s );

    printf("Enter limit\n");
    scanf("%d", &e);

    for (int i=s;i<=e;i=i+s)
      printf("%d ",i);
printf("\n");
}
