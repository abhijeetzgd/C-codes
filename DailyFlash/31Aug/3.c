#include<stdio.h>
void main(){

  int a,n;
  printf("Enter range : ");
  scanf("%d %d",&a,&n);
  for(int i=a;i<=n;i++){
    if(i%2!=0 )
      printf("square of %d =  %d & cube of %d = %d\n ",i,i*i,i,i*i*i);
    }
  
}
