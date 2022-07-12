#include<stdio.h>

void main(){

  int id = 4;
  float sal = 50000.6;
  int NumberOfDayWorked = 12;
  void *idptr = &id;
  void *salptr = &sal;
  void *dayptr = &NumberOfDayWorked;

  printf("Emp id = %d\n",*(int *)idptr);
  printf("Emp salary = %f\n",*(float *)salptr);
  printf("Emp Number Of Day Worked = %d\n",*(int *)dayptr);

}
