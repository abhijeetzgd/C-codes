#include<stdio.h>
void main(){

  int a,b,c;
  printf("Enter three nubers : ");
  scanf("%d %d %d",&a,&b,&c);

  if(a<b && a<c){
    printf("%d is minimum ",a);
  }else if(b<a && b<c)
    printf("%d is minimum",b);
    else
    printf("%d is minimum ",c);
}
