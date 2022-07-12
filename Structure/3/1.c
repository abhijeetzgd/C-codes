#include<stdio.h>
typedef struct company{

  char name[20];
  int numEmp;
}company;

void main(){

  company cmp1 = {"biencaps",34};
  company cmp2 = cmp1;
  cmp2.numEmp = 40;
  company cmp3 = cmp2;

  printf("company name = %s\nnumber of employee = %d\n\n",cmp1.name,cmp1.numEmp);
  printf("company name = %s\nnumber of employee = %d\n\n",cmp2.name,cmp2.numEmp);
  printf("company name = %s\nnumber of employee = %d\n\n",cmp3.name,cmp3.numEmp);

}
