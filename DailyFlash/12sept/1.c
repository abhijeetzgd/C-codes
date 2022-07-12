#include<stdio.h>
void main(){

  int n,v=0,c=0;

  printf("Enter number of character : ");
  scanf("%d",&n);
  printf("Enter the elements \n");
  char arr[n];

  for(int i=0;i<n;i++){
    scanf(" %c",&arr[i]);
  }
  for(int i=0;i<n;i++){
    if(arr[i]=='a' ||arr[i]=='i'||arr[i]=='e'||arr[i]=='o'||arr[i]=='u' ){
      v++;
    }else{
      c++;
    }

  }
  printf("Number of Consonants = %d\n",c);
  printf("Number of Vowels = %d\n",v);


}
