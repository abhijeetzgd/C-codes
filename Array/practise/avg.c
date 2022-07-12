#include<stdio.h>
void main(){

  int avg,sum=0;
  int marks[10];
printf("Enter the elements : ");
  for(int i =0;i<10;i++){
    scanf("%d",&marks[i]);
  }

  for(int i=0;i<10;i++){
    sum=sum+marks[i];
  }

  avg=sum/10;

  printf("Average marks of student is %d\n",avg);
}
