#include<stdio.h>

int isTriangle(int *ptr){
  int sum = 0;

  for(int i=0;i<3;i++){
      sum  = sum + *(ptr+i);
    }

if(sum == 180)
  printf("It is Triangle\n");
else
  printf("It is not Triangle\n");

}

void main(){

  int arr[3];
  printf("Enter elements of Triangle\n");
  for(int i=0;i<3;i++){

    scanf("%d",&arr[i]);
  }

  isTriangle(arr);
}
