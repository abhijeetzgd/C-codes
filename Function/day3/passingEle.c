#include<stdio.h>
int sum=0;

void elePass(int x){
  sum =sum + x;
}

void main(){

  int arr[]={1,2,3,4,5};

  for(int i=0;i<5;i++){

    elePass(arr[i]);
  }

  printf("sum = %d\n",sum);

}
