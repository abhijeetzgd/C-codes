/*
Program 4: Write a program that accepts integer input from user and print if it is
prime number or not.
(Note: A prime number is such a number which is only divisible 1 & that number
itself)
Input: 5
Output: 5 is a Prime Number.
*/

#include<stdio.h>
void main(){
  int a;
  printf("Enter the number");
  scanf("%d",&a );
  for(int i=2;i<a/2;i++){
    if(a%i!=0){
    printf("%d is  a prime Number\n",a );
    break;
  }}
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$ ./a.out
Enter the number 23
23 is  a prime Number
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Input_output2/code$
*/
