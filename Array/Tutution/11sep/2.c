#include<stdio.h>
void main(){
  int n;
  printf("Enter size of array : ");
  scanf("%d",&n);

  int stud_age[n];
  printf("Enter elements in array\n");



  for(int i=0;i<n;i++){
    scanf("%d",&stud_age[i]);
  }

  printf("Array Elements : \n" );

    for(int i=0;i<n;i++){
      printf("%d ",stud_age[i]);
    }
    printf("\n");
}
