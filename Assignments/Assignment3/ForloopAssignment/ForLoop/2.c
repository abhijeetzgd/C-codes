/*
Q2. write a c program to print odd numbers from 20 to 40
*/
#include<stdio.h>
void main(){
  for(int i=20 ; i<=40;i++){
    if(i%2!=0){
      printf("%d ",i);
    }
  }
  printf("\n");
}
