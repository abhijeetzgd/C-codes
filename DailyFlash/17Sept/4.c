#include<stdio.h>
void main(){

char ch[100],temp,cnt=0;
printf("Enter charachter : \n");
while(temp!='\n'){
  int i=0;
  scanf(" %c",&temp);

  if(temp<='z' && temp>='a'){
    ch[i]=temp;
    cnt++;
  }
i++;
}
for(int i=0;i<cnt;i++){
printf("%c ",ch[i]);
}
printf("\n");
}
