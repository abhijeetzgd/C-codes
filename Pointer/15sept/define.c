# include<stdio.h>
#define size 5
void main(){

  int arr[size]={1,2,3,4};

  printf("Size of array = %ld\n",sizeof(arr) );

  printf("Elements are : \n");
  for(int i =0;i<5;i++){
    printf("%d\n",arr[i]);
  }

}
