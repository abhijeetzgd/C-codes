/*
Program 4. Write a Program That Prints Palindrome Series From Entered Range
Using Nested While Loop.
Input:
Enter Start: 100
Enter End: 200
Output: 101 111 121 131 141 151 161 171 181 191.
*/

#include<stdio.h>
void main(){
  int n,rem,sum,a;

  printf("Enter a Number for palindrom Series: " );
  scanf("%d %d",&a,&n );
  int t = a;
  printf("Palindrome Series from series is as -\n" );
  do{
    sum = 0;
  while(a > 0){

    rem = a % 10;
    sum = sum * 10 + rem;
    a = a/10;
  }
  if(t == sum){

    printf("%d\n",t );
  }
  a=++t;
}while(t!=n);

}

/*
Outputabhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/10Aug_Assignment$ cc 4.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/10Aug_Assignment$ ./a.out
Enter a Number for palindrom Series: 100 200
Palindrome Series from series is as -
101
111
121
131
141
151
161
171
181
191
*/
