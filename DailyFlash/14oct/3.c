#include<stdio.h>
void main(){

char carr[] = {'A','B'};
int arr[] = {1,2,3,4,1,2,3,4,1,2};

printf("password is: \n");

for(int i=0;i<2;i++){
  void *vptr = carr+i;
  printf("%c",*(char *)vptr) ;
}

for(int i=0;i<10;i++){
  void *vptr = arr+i;
  printf("%d",*(int *)vptr) ;
}

printf("\n");
}
