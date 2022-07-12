//different scope madhe same ariable chalta

#include<stdio.h>
int a=10;
void main(){
int a =11;
  printf("a = %d",a);//acess karatna javalcha a gheto
  printf("a = %d",extern a)
}
