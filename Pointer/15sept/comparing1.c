#include<stdio.h>
void main(){

  int a[5]={1,2,3,4,5};
  int b[5]={1,2,3,4,5};
  int flag=0;
  for(int i=0;i<5;i++){
    if(a[i]!=b[i])
      flag =1;
  }
  if(flag ==0){
    printf("Both arrays are same\n");
  }else{
    printf("Both arrays are differnt\n");
    }
}
