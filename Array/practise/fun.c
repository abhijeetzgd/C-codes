//passing array element to function()

#include<stdio.h>
void disp(int n);
void main(){

  int arr[5]={1,2,3,4,5};

  for(int i=0;i<5;i++){
    disp(arr[i]);
  }
}

void disp(int n){
  printf("%d\n",n);
}
