//Program 51. C/C++ program to get largest element in each col of the matirix of 4*4

#include<stdio.h>

void main(){

 int arr[4][4];

 printf("Enter elements of array 4 * 4 : \n" );

 for(int i=0;i<4;i++){

   for(int j=0;j<4;j++){

     scanf("%d",&arr[i][j]);
   }
 }

 for(int j=0;j<4;j++){

   for(int i=0;i<4;i++){

      for(int k=j+1;k<4;k++){
       if(arr[i][j]<arr[i][k]){
         int temp = arr[i][j];
         arr[i][j] = arr[i][k];
         arr[i][k] = temp;
       }
     }

     if(arr[i][j]!=arr[i][j+1]){
       printf("Maximum element from row %d is %d\n",i,arr[i][j]);
       break;
     }
   }
 }
/*

 for(int i=0;i<4;i++){

   for(int j=0;j<4;j++){
     printf("%d ",arr[i][j]);
   }printf("\n");
 }*/
}
