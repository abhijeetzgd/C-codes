#include<stdio.h>

void main(){

  int arr[][1]={0,1,2,3,4,5,6,7,8,9};

  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      printf("%d ",arr[i][j] );
  }printf("\n");
}

}
