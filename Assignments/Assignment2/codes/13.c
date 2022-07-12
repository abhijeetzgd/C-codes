#include<stdio.h>
void main(){

  float n1, n2, n3;
  scanf("%f %f %f",&n1,&n2,&n3);
  if(n1 >= n2 && n1 >= n3){
    printf("Largest number: %f",n1);
  }
  if(n2 >= n1 && n2 >= n3){
    printf("Largest number: %f",n2);
  }
  if(n3 >= n1 && n3 >= n2) {
    printf("Largest number: %f",n3);
  }
}
