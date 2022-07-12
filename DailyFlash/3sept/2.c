#include<stdio.h>
void main(){

  int a,n,sum,fact=1;
  printf("Enter the range : ");
  scanf("%d %d",&a,&n);

  for (int i=a;i<=n;i++){
    fact =1;
    for(int j=1;j<=i;j++){
      fact = fact * j;
    }
    printf("fact of %d is : %d\n",i,fact);
  }
}
