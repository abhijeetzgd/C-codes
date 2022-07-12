#include<stdio.h>
int isPrime(int n){

  for(int i=2;i<=n/2;i++){
    if(n%i==0){
      return 1;
    }
  }
  return 0;
}

void main(){

  int n;
  printf("Enter array Size\n");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

//  int arr[n];


  for(int i=0;i<n;i++){

    int flag = isPrime(arr[i]);

    if(flag==0){
      printf("%d is prime number\n",arr[i]);
    }else{
      printf("%d is not prime number\n",arr[i]);

    }
  }



}
