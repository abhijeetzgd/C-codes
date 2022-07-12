#include<stdio.h>
void main(){

  int n,temp,g=0,i,j,k;
  printf("Enter Number of elements : ");
  scanf("%d",&n);

  int a[n],b[n];

  printf("Enter the elements : ");
  for(i=0;i<n;i++){

    scanf("%d",&a[i]);


  }

  for(i = 0; i < n; i++)
     {
         for(j = i+1; j < n; )
         {
             if(a[j] == a[i])
             {
                 for(k = j; k < n; k++)
                 {
                     a[k] = a[k+1];
                 }
                 n--;
             }
             else
             {
                 j++;
             }
         }
     }

  printf("Entered elements are : ");
  for(int i =0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
