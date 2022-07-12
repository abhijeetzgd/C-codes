#include<stdio.h>
int Neon(int n){
  int sq=n*n;
  int sum = 0,rem=0;
  while(sq > 0){
    rem = sq %10;
    sum = sum + rem;
    sq = sq/10;
  }
  if(sum == n){
    return 1;

  }else{
    return 0;
  }
}

void main(){

  int n;
  int ans;
  printf("Enter a number\n");
  scanf("%d",&n);
  ans = Neon(n);
  if(ans == 0)
    printf("%d is not Neon number \n",n );
  else
    printf("%d is Neon number \n",n );

}
