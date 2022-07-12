#include<stdio.h>

typedef struct company{

  char name[10];
  int numEmp;
}company;

void main(){

  company cmp1 = {"biencaps",34};
  company cmp2 = {"biencaps",34};

printf("%d\n",(cmp1.name == cmp2.name));
printf("%d\n",(cmp1.numEmp == cmp2.numEmp));


  if((cmp1.name[10] == cmp2.name[10] )&& (cmp1.numEmp == cmp2.numEmp)){
    printf("Both objects are equal");
  }
  else{
    printf("Both objects are different");
}
}
