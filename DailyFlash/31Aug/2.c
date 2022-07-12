#include<stdio.h>
void main(){

  int a,n;
  printf("Enter range : ");scanf("%d %d",&a,&n);for(int i=a;i<=n;i++){if(i%4==0 & i%7==0)printf("%d ",i);}
  printf("\n");
}
