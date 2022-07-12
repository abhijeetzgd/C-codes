#include <stdio.h>

void main(){
  int n=5;

    int size=5;
    printf("Enter sixe for float array  : ");
    scanf("%d",&size);


  int arr[size]={10,20,40,50};
  printf("Size of Int array = %ld\n",sizeof(arr) );

  char carr[2+3]={'a','b','c'};
  printf("Size of char array = %ld\n",sizeof(carr) );

  float farr[size]={10.5f,2.4f,45.4f,90.0f};
  printf("Size of float array = %ld\n",sizeof(farr) );


  printf("Elements in float array\n");
  for(int i=0;i<5;i++){
    printf("%f\n",farr[i] );
  }

  printf("Elements in char array\n");
  for(int i=0;i<5;i++){
    printf("%c\n",carr[i] );
  }
}
