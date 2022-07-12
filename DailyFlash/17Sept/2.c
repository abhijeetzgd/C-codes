#include<stdio.h>
void main(){

  int n,temp,rem,cnt =0;

  printf("Enter length of array : ");
  scanf("%d",&n);
  int arr[n],parr[n];

  for(int i=0;i<n;i++){
    printf("Enter the elements : ");
    
        scanf("%d",&arr[i]);

    temp = arr[i];
    cnt=0;
    while(temp>0){
      rem = temp %10;
      if(rem==0){
        cnt++;
      }else{

        break;
      }
      temp = temp/10;
    }
    printf("Number of trailing zero = %d\n",cnt);
}

}
