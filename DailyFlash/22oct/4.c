#include<stdio.h>
void Avg(int n,int *ptr){

  int sum =0;

  for(int i =0;i<n;i++){
    sum = sum + *(ptr+i);
  }
  printf("Avg = %d\n",sum/n);
}
void main(){

  int n;
  printf("Enter numerof elements in array : ");
  scanf("%d",&n);
  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  void (*ptr)(int ,int* ) ;
  ptr = Avg;
  ptr(n,arr);
}
