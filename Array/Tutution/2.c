#include<stdio.h>
void main(){

  int Stud_age [5] = {19,20,22,21};
  int stud_grade [4] = {'A','B','C','D'};
  float stud_sal [3] = {10.45,8.5,14.30,89.98,90.9};


}
/*
2.c: In function ‘main’:
2.c:6:41: warning: excess elements in array initializer
   float stud_sal [3] = {10.45,8.5,14.30,89.98,90.9};
                                         ^~~~~
2.c:6:41: note: (near initialization for ‘stud_sal’)
2.c:6:47: warning: excess elements in array initializer
   float stud_sal [3] = {10.45,8.5,14.30,89.98,90.9};
                                               ^~~~
2.c:6:47: note: (near initialization for ‘stud_sal’)
*/
