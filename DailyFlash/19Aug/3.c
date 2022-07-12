#include<stdio.h>
void main(){
  int a;
  printf("Enter a number 0 - 11 : " );
  scanf("%d",&a );

if(a == 0)
  printf("january has 31 days");
else  if(a == 1)
    printf("Feb has 28 days");
  else  if(a == 2)
      printf("march has 31 days");
    else  if(a == 3)
    printf("april has 30 days");

      else  if(a == 4)
          printf("may has 31 days");
        else  if(a == 5)
            printf("june has 30 days");
          else if(a==6)
              printf("july has 31 days");
            else if(a==7)
              printf("August has 31 days");
              else if(a==8)
                printf("suptember has 30 days");
                else if(a==9)
                  printf("October has 31 days");
                  else if(a==10)
                    printf("November has 30 days");
                    else if(a==11)
                      printf("december has 31 days");


}
