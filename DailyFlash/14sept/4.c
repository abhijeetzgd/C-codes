#include<stdio.h>

void main(){

  int a,n,temp,rem;
  printf("Enter the length of array : ");
  scanf("%d",&n);
  int arr[n],arr1[n];
  printf("Enter elements : ");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){
    temp = arr[i];
    a=0;
    while(temp>0){
      rem = temp % 10;
      a = a*10 + rem;
      temp = temp/10;
    }
    arr1[i]=a;
}
printf("Pallindrome Numbers are \n");

for(int i=0;i<n;i++){
  if(arr[i]==arr1[i]){
    printf("%d ",arr[i]);
  }
}

printf("\n");


}
