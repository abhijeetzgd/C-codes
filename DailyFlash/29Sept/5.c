#include<stdio.h>
void main(){
int n;
  printf("Enter sixe of character array : ");
  scanf("%d",&n);
int ch[n];
printf("Enter character elements\n" );

  for(int i=0;i<n;i++)
  {

    scanf("%d",&ch[i]);
  }

  for(int i=0;i<n;i++){

    if(ch[i]%2==0){
      ch[i]=ch[i]+10;
      printf("%d ",ch[i]);
    }else{
      printf("%d ",ch[i]);
    }
  }
  printf("\n");
}
