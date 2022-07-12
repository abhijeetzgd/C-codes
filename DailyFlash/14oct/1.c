#include<stdio.h>
void main(){

  int n;
  scanf("%d",&n);
  char arr[n];
  for(int i=0;i<n;i++){
    scanf(" %c",&arr[i]);
  }


  for(int i=0;i<n;i++){
    void *vptr = arr+i;

     char a = *(char *)vptr;
     if(a<'z' && a>'a'){
       printf("Character\n" );
     }else{
       printf("Digit\n" );
     }
     vptr++;
  }

}
