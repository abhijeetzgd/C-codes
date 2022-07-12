#include<stdio.h>
void main(){

  int n;
  printf("Enter range for Printing cube \n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++){

    printf("Cube of %d = %d\n",i,i*i*i);
  }
}
