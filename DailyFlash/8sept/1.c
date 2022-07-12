#include<stdio.h>
void main(){

  int a;
  printf("Enter number for series : ");
  scanf("%d",&a );
  int n=1;
  for(int i=1;i<=14;i++){
    printf("%d ",n);
    n=n+a;
  }printf("\n");

}
