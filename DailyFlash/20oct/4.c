#include<stdio.h>
void isPallindrome(int n);
void main(){

  int n;
  printf("Enter number : ");
  scanf("%d",&n);

  isPallindrome(n);


}
void isPallindrome(int n){

  int sum=0,rem;
  int m=n;

  while(m!=0){
    rem = m%10;
    sum = sum*10 + rem;
    m=m/10;
  }

//  printf("sum = %d\n",sum);

  if(n==sum){
    printf("%d is pallindrome\n",n);
  }else{
    printf("%d is not pallindrome\n",n);

  }
}
