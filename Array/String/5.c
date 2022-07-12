#include<stdio.h>
void main(){
  char str[20];
  printf("Enter String : ");
//  scanf("%s",str);
scanf("%[^\n]",str);
  printf("You Enter : %s\n",str);
}
