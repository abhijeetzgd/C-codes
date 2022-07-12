#include<stdio.h>

typedef struct company{

  char name[20];
  int numEmp;
}company;

void main(){

  company cmp1 = {"biencaps",34};
  company cmp2 = {"biencaps",34};

  if(cmp1 == cmp2)
    printf("Both objects are equal");
  else
    printf("Both objects are different");

}
