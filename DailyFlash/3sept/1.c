#include <stdio.h>
void main(){

  int n,sum=0;
  printf("Enter the number : ");
  scanf("%d",&n);


  for(int i=1;i<=n/2;i++){
    if(n%i==0){
      sum = sum + i;
    }
  }

if(sum == n)
printf("%d is perfect number\n",n );
else
printf("%d is not perfect number\n",n );

}
