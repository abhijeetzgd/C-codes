#include<stdio.h>

int sumOfRow(int (*arr1)[2],int *arr2,int r,int c){
  int sum = 0;

  for(int i=0;i<2;i++){
    sum =0;
    for(int j=0;j<3;j++){
      sum = sum + *(*(arr1 + 0)+j);
    printf("sum == %d\n",sum);
  }

  *(arr2+0) = sum;
  sum =0;

//  sum =0;
  for(int j=0;j<3;j++){
    sum = sum + *(*(arr1 + 1)+j);
  printf("sum == %d\n",sum);
  }

  *(arr2+1) = sum;
  sum =0;

}
  for(int i=0;i<r;i++){
    printf("%d ",*(arr2 + i) );
  }
  printf("\n" );
}

void main(){

  int n,r,c;
  printf("Enter number of row and col in 2D array: ");
  scanf("%d %d",&r,&c);
  int arr1[r][c];
  int arr2[r];

  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){

    scanf("%d",&arr1[i][j]);
  }
}
  sumOfRow(arr1,arr2,r,c);
}
