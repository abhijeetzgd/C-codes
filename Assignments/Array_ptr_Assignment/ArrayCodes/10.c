/*
Program 10: Write a C program that has an array of character precision numbers take size of
array from user and elements too, Sort each element in array in ascending order of alphabets
and print it.
Input: Size of array: e
S o r t M e
Output : e m o r s t
Test Case : 0. all UPPERCASE letters must be converted into lowercase.
1. size of array should be checked for positive integer.
*/

#include<stdio.h>
//void swap(int ,int );
void AcceptArray(char arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf(" %c",&arr[i]);
    if(arr[i] <=90){
      arr[i] = arr[i] + 32;
    }
  }
//  return arr;
}

void display(char arr[],int n){

  for(int i=0;i<n;i++){

    printf("%c ",arr[i]);
  }

}

void swap(char* a,char* b){
  char temp = *a;
  *a = *b;
  *b = temp;
}

void sort(char arr[],int n){

  for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j])
        swap(&arr[i],&arr[j]);
    }
  }
}


void main(){

  int n;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   char arr[n];
   AcceptArray(arr,n);
   sort(arr,n);
   display(arr,n);
   printf("\n");

}
