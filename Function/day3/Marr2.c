#include<stdio.h>

int passMultiArr(int (*ptr)[3]){

  int sum = 0;

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sum = sum + *(*(ptr+i)+j);
    }
  }return sum;
}

void main(){

  int arr[][3]={1,2,3,4,5,6,7,8,9};
  int sum =0;

  sum = passMultiArr(arr);

  printf("%d\n",sum) ;
}
