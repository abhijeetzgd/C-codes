#include<stdio.h>
void main(){

  int a ;
  printf("Enter a number between 0 - 6 : " );
  scanf("%d",&a );

if(a == 0)
printf("Monday\n");
else  if(a == 1)
    printf("Tuesday\n");
  else  if(a == 2)
      printf("Wednesday\n");
    else  if(a == 3)
        printf("Thursday\n");
      else  if(a == 4)
          printf("Friday\n");
        else  if(a == 5)
            printf("Saturday\n");
          else if(a==6)
              printf("Sunday\n");
              else
              printf("Wrong choice");

}
