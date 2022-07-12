#include<stdio.h>
void main(){

  int stud_age[5];
  printf("Enter elements in array\n");

  for(int i=0;i<5;i++){
    scanf("%d",&stud_age[i]);
  }

  printf("Array Elements : \n" );

    for(int i=0;i<5;i++){
      printf("%d ",stud_age[i]);
    }
    printf("\n");
}
