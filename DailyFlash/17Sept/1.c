#include<stdio.h>
void main(){

  int n,flag=0,temp,g=0,f=0;

  printf("Enter length of array : ");
  scanf("%d",&n);
  int arr[n],parr[n];
  printf("Enter the elements : ");
  for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

  for(int i=0;i<n;i++){
        temp = arr[i];
        flag  = 0;
        for(int j=2;j<temp;j++){
          if(temp%j==0){
            flag =1;
          }
        }

        if(flag ==0){
          parr[g]=temp;
          g++;

      //  }else{
          for(int k=i;k<n-1;k++){
            arr[k]=arr[k+1];
          }
          f++;
        }
    }
printf("Actual array is\n");
for(int i=0;i<n-f;i++){
  printf("%d ",arr[i]);
}

printf("\nprime numbers are");
for(int i=0;i<g;i++){
printf("%d ",parr[i]);
}
printf("\n");
}
