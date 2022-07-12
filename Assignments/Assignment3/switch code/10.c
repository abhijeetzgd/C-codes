/*
Write a program in c in which user should enter two numbers if both the numbers are positive
multiply them and provide to switch case to verify number is even or odd, if user enters any
negative number program should terminate saying “Sorry negative numbers not allowed”
*/

#include<stdio.h>
void main(){
  int a,b,mul,ch;
  printf("Enter the two number\n" );
  scanf("%d %d",&a,&b);

  if(a>=1 && b>=1){
    mul = a*b;
    printf("Mul = %d\n",mul);
    ch = mul%2;
    switch (ch){
      case 1:
        printf("Number is odd\n");
        break;

      case 0:
          printf("Number is Even\n");
          break;
    }

  }else {
    printf("Negative number not allowed\n" );
  }

}
