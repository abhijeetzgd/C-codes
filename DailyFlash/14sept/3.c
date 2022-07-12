#include<stdio.h>
int factorial(int);
void main(){

  int a,n,temp;
  printf("Enter the length of array : ");
  scanf("%d",&n);
  int arr[n],arr1[n];
  printf("Enter elements : ");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n;i++){
    temp = arr[i];
    if(temp%2==0){
      temp = temp*temp;
      arr1[i]=temp;
    }else{
      arr1[i]=temp;
    }
}

int max =0;
int j;
for(int i=0;i<n;i++){
  if(max<arr1[i]){
    max = arr1[i];
    j=i;
  }
}

printf("Enter elements are : \n");
for(int i=0;i<n;i++){
  printf("%d ",arr1[i]);
}
printf("and maximum element is %d\n",arr[j]);


}
