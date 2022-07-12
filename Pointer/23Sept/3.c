#include<stdio.h>

void main(){

int arr[7]={1,2,3,4,5,6,7};

int *iptr = arr;

printf("%d\n",*iptr);

iptr = iptr + 3;
printf("%d\n",*iptr);
}
