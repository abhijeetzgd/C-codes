//Q6. Write a c program to print characters from A to Z in upper case and in lower cas
//Op -> A = a , B = b

#include<stdio.h>
void main(){
int A=65,a=97;
for(A=65,a=97;A<=90 && a<=122;a++ ,A++){
  printf("%c = %c\n",A,a);
}
}
