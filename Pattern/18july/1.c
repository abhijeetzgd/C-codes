#include<stdio.h>
void main(){
  int r,c;
  printf("Enter value for rows And column \n" );
  scanf("%d %d",&r,&c );
  for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){

      printf("* " );
    }
      printf("\n" );
  }
}
