#include<stdio.h>
void main(){

  int n,sum=0,rem;

  printf("Enter length of array : ");
  scanf("%d",&n);
  int arr[n];

  printf("Enter the elements : ");

  for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){
    sum = sum + arr[i];
    }
while(sum>0){
  rem=sum%10;
  for(int i =0 ;i<n;i++){
    if(rem == arr[i])
      printf("index %d ",i);

  }
  sum = sum/10;
}
printf("\n");
}
