#include<stdio.h>
int strong(int);
void main(){

  int a,n,temp,temp1,temp2,rem,flag1=0,flag2=0;
  printf("Enter the length of array : ");
  scanf("%d",&n);
  int arr[n],arr1[n];
  printf("Enter elements : ");

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0,j=n-1;i<n/2&&j>=0;j--,i++){
    temp1 = arr[i];
    temp2 = arr[j];
    flag1 = strong(temp1);
    flag2 = strong(temp2);

    if(flag1 == flag2){
      temp = arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
    flag1 = 0;
    flag2 = 7;
}

printf("OUTPUT\n");
for(int i=0;i<n;i++){
  printf("%d ",arr[i]);
}
printf("\n");
}

int strong(int n){

  int flag =0,sum=0,rem,fact =1;
  int nu = n;
  while(n>0){
    rem = n%10;
    fact =1;
    for(int i=1;i<=rem;i++){
      fact = fact  * i;
    }
    sum = sum + fact;
    n = n/10;
  }

  if(sum == nu){
    return 1;
  }else{
    //return 0;
  }
}
