#include<stdio.h>
#include<math.h>
int power(int , int );
void main(){
//int a[6]={0,1,2,3,4,5};
  int x,n,sum=1,p;
  int a=-1;
  printf("Enter value of x");
  scanf("%d",&x);

  printf("enter value of n");
  scanf("%d",&n);

  for(int i=0;i<=n;i++){
    p=power(x,0+i);
    sum = sum * p;

  }
  printf("%d\n",sum);
}
int power(int x , int n ){
  int c=pow(x,n);
  return c;
}
