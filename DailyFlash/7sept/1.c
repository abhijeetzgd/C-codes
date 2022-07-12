#include<stdio.h>
void main(){
  int a,n;
  printf("Enter two number : ");
  scanf("%d %d",&a,&n);

  printf("Number before Swapping : %d   %d \n",a,n);
  a=a+n;
  n=a-n;
  a=a-n;
  printf("Number after Swapping : %d   %d \n",a,n);

}
