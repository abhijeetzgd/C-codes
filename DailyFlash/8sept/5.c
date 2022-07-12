#include<stdio.h>
int isPerfect(int);
void main(){

  int n,p;
  printf("Enter a range from 1 to : " );
  scanf("%d",&n);
  printf("1 ");
  for(int i=1;i<=n;i++){
    isPerfect(i);


  }
    printf("\n");
}

int isPerfect(int n){
  int sum=0;

  for(int i=1;i<=n-1;i++){
    if(n%i==0){
      sum = sum + i;
    }
  }
#//rintf("n = %d & sum = %d \n",n,sum);
if(sum == n){
  printf("%d ",n);
}



}
