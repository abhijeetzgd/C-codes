#include<stdio.h>

int descending(int *ptr,int n){
  int min = *(ptr+0);

for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if( *(ptr+i) <= *(ptr+j)){

      int a = *(ptr+i);
      *(ptr+i) = *(ptr+j);
      *(ptr+j) = a;
    }
  }
}

for(int i=0;i<n;i++){
  printf("%d ",*(ptr+i));
}
printf("\n");

}

void main(){

  int n,min;
  printf("Enter number of elements in array : ");
  scanf("%d",&n);
  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  descending(arr,n);

}
