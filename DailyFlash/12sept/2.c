#include<stdio.h>
void main(){

  int n,flag =0,temp;
  printf("Enter number of elements ");
  scanf("%d",&n);
  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  printf("Prime number in given array are : ");
  for(int i=0;i<n;i++){

    temp = arr[i];
    flag =0;
    for(int j=2;j<=temp/2;j++){
      if(temp %j==0)
      flag =1;
    }

    if(flag == 0){
      printf("%d ",arr[i]);
    }
  }
    printf("\n");
}
