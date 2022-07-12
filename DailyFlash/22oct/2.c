#include<stdio.h>

void swap(int *ptr1,int *ptr2){


  for(int i=0;i<3;i++){

    int a = *(ptr1+i);
    *(ptr1+i) = *(ptr2+i);
    *(ptr2+i) = a;
  }
  printf("Array1 After swapping : ");
    for(int i=0;i<3;i++){

      printf("%d ",*(ptr1+i));
    }
    printf("\n");

  printf("Array2 after swapping : ");

    for(int i=0;i<3;i++){

      printf("%d ",*(ptr2+i));
    }
    printf("\n");


}

void main(){

  int arr1[3]={10,20,30};
  int arr2[3]={1,2,3};

printf("Array1 before swapping : ");
  for(int i=0;i<3;i++){

    printf("%d ",arr1[i]);
  }
  printf("\n");

printf("Array2 before swapping : ");

  for(int i=0;i<3;i++){

    printf("%d ",arr2[i]);
  }
  printf("\n");

  swap(arr1,arr2);

}
