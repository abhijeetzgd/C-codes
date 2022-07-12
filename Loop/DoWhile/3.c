#include<stdio.h>
void main(){

    int num,rem,sum;
    char ch;
  do{
    printf("Enter the number : " );
    scanf("%d",&num );
    int var = num;

      rem=0;
      sum=0;
      while(num>0){
        rem = num % 10;
        sum = sum*10 + rem;
        num = num/10;
      }
      printf("Reverse of %d is %d ",var,sum );
      printf("\nDo you want to continue" );
      scanf(" %c",&ch);
    } while(ch == 'Y' || ch == 'y');
}
