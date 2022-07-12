#include<stdio.h>
void main(){
  int n,sum=0;
  printf("Enter size of array : ");
  scanf("%d",&n);

  int stud_age[n];
  printf("Enter elements in array\n");



  for(int i=0;i<n;i++){
    scanf("%d",&stud_age[i]);
  }

  printf("Sum of Array Elements : " );

    for(int i=0;i<n;i++){
      sum = sum + stud_age[i];
      }
    printf("%d\n",sum);
}
