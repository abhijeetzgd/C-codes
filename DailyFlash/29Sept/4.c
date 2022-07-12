#include<stdio.h>
void main(){
int n;
  printf("Enter sixe of character array : ");
  scanf("%d",&n);
char ch[n];
printf("Enter character elements\n" );

  for(int i=0;i<n;i++)
  {

    scanf(" %c",&ch[i]);
  }

  for(int i=0;i<n;i++){

    if(ch[i]<97){
      printf("%c ",ch[i]+32);
    }else{
      printf("%c ",ch[i]-32);

    }
  }
  printf("\n");
}
