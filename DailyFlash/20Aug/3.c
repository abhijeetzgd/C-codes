#include<stdio.h>
void main(){

  int year;
  printf("Enter a year : ");
  scanf("%d",&year );

  if(year % 100 ==0 && year % 400 == 0){
    printf("%d year is leap year\n",year );
  } else if(year % 4 == 0){
    printf("%d year is leap year\n",year );
  } else {
    printf("%d year is not leap year\n",year );
  }
}
