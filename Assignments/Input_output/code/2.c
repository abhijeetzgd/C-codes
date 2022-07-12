/*
Program 2: Write a C program that accepts the time in hours and minutes from user,
and Prints as total number of Minutes.
Input:
Enter Hours: 2
Enter minutes: 30
Output: Total Minutes: 150 minutes.
*/

#include<stdio.h>
void main(){
  int h,m,t;
  printf("Enter Hours: " );
  scanf("%d",&h);
  printf("Enter minutes: " );
  scanf("%d",&m);

  t=h*60;
  t=t+m;
  printf("\nTotal Minutes: %d minutes \n",t);

}
