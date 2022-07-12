//Q3. write a c program to print even numbers between 50 to 70

#include<stdio.h>
void main(){
  for(int i=50;i<=70;i++){
    if(i%2==0){
      printf("%d ",i );
    }
  }
  printf("\n" );
}
