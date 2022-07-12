#include<stdio.h>
int pass(int r,int c,int arr[r][c]){

  int sum = 0;

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i==j){
          sum = sum + arr[i][j];
        }
    }
  }
return sum;
}
void main(){

  int r,c;
  printf("Enter number of rows and col : ");
  scanf("%d %d",&r,&c );
  int arr[r][c];

  printf("Enter elements of array\n");

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
  }

  int n = pass(r,c,arr);
printf("Sum of Diagonal element = %d\n",n);
}
