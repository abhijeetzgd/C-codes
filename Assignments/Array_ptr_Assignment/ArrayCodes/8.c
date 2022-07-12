/*
Program 8: Write a C program that has an array of Characters take size of array from user and
elements too, Print Occurrence of Vowels & Consonants in array.
Input: Size of array : 11
H e l l o W o r l d
Output:
Occurrence of vowels are : 3
Occurrence of consonants are : 7
*/

#include<stdio.h>

void AcceptArray(char arr[],int n){

  printf("Enter elements of array \n");

  for(int i=0;i<n;i++){
    scanf(" %c",&arr[i]);
  }
//  return arr;
}

int numberOfvovel_consonenet(char arr[],int n){

  int cntv=0,cntc = 0;

  for(int i=0;i<n;i++){

    int rem = arr[i];


      if(rem == 97 || rem == 101 ||rem == 105 ||rem == 111 ||rem == 117)
        cntv++;
      else
        cntc++;

}
printf("number of vowels in given array is %d\nnumber of consonants in given array is %d\n",cntv,cntc);

}


void main(){

  int n,cntv,cntc;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   char arr[n];
   AcceptArray(arr,n);

   numberOfvovel_consonenet(arr,n);

}
