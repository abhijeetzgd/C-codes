#include<stdio.h>
void main(){

  int arr[5]={10,'A',20,'B',30};
  int ar[5]={'a','b','c','d','e'};
  int a[5]={10.5,1.3,4.5,6.4,3.2};

  printf("first array\n");
  for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);
  }
  printf("size of array = %ld\n",sizeof(arr));
  printf("second array\n");
  for(int i=0;i<5;i++){
    printf("%d\n",ar[i]);
  }
  printf("size of array = %ld\n",sizeof(ar));

  printf("third array\n");
  for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
  }
  printf("size of array = %ld\n",sizeof(a));


}
