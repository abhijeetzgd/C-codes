//call by reference
//passing address of array element to function

#include<stdio.h>
void disp(int *temp);
void main(){
  int a[]={1,2,3,4,5,6,7,8,9,10};

  printf("Array elements are \n");
  for(int i=0;i<10;i++){
    disp(&a[i]);
  }
}

void disp(int *t){

    printf("%d\n",*t);
}
