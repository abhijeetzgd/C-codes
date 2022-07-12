/*
Program 7: Write a C program that has an array of Characters take size of array from user and
elements too, Toggle case of all vowels in array and print it
Input: Size of array: 8
C o r e 2 W E b
Output: C O r E 2 W e b
{Note: Word toggle case says that UPPERCASE to lowercase and converse }
*/

#include<stdio.h>

void AcceptArray(char arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf(" %c",&arr[i]);
  }
//  return arr;
}

void display(char arr[],int n){

  for(int i=0;i<n;i++){

    printf("%c",arr[i]);
  }
  
}

void toggle(char arr[],int n){

  for(int i=0;i<n;i++){

    if(arr[i]<=122 && arr[i]>=97){

      arr[i] = arr[i]-32;
    }else{
    if(arr[i]<=90 && arr[i]>=65){

      arr[i] = arr[i]+32;
    }
  }
  }
}
void main(){

  int n;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   char arr[n];
   AcceptArray(arr,n);
//   display(arr,n);
   toggle(arr,n);
   display(arr,n);
   printf("\n");

}
