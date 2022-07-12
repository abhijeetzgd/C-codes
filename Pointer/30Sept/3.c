#include<stdio.h>

void main(){

  char arr[][3] = {'a','b','c','d','e','f','g','h'};

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%c ",arr[i][j] );
  }printf("\n");
}

}
