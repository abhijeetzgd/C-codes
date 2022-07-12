#include<stdio.h>
void main(){

  int n,temp,rem,sum=0,fact=1;
  printf("Enter number of elements : ");
  scanf("%d",&n );
  int arr[n];

  printf("Enter the elements\n");

  for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);
  }
  printf("Strong number are : ");
  for(int i=0;i<n;i++){
    temp=arr[i];
    sum =0;
  while(temp>0){

    rem = temp%10;
    fact = 1;
    for(int j=1;j<=rem;j++){
      fact = fact * j;
    }
    sum = sum +fact;
    temp = temp/10;
  }
    if(sum == arr[i]){
      printf("%d ",arr[i]);
    }
  }
  printf("\n");
}
