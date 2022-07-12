#include<stdio.h>
void  main(){
  char ch ;
  printf("Enter the character :" );
  scanf("%c",&ch );

  if(ch <= 'z' && ch >= 'a'){
    printf("%c is lower case letter\n",ch );
  } else {
    printf("%c is uppercase letter\n",ch );
  }
}
