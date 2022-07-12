#include<stdio.h>
void main(){

  int a,n;

  printf("Enter range : ");
  scanf("%d %d",&a,&n);

  for(int i=a;i<=n;i++){

    if(i%2==0)
      printf("Cube of %d is %d ,and square of %d is %d\n",i,i*i*i,i,i*i);
  }


}
