#include<stdio.h>
int factorial(int);
void main(){

  int a,n;
  printf("Enter the length of array : ");
  scanf("%d",&n);
  int arr[n],fact[n];
  printf("Enter elements : ");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
for(int i=0;i<n;i++){
  a=factorial(arr[i]);
  fact[i]=a;

}

printf("Enter elements are : \n");
for(int i=0;i<n;i++){
  printf("%d ",arr[i]);
}
printf("\n");

printf("Their factorials are : \n");
for(int i=0;i<n;i++){
  printf("%d ",fact[i]);
}
printf("\n");

}

int factorial(int n){

  int fact =1;
  for(int i=1;i<=n;i++){
    fact = fact * i;
  }
  return fact;
}
