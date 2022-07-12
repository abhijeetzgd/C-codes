#include<stdio.h>
void main(){
  int sum=1;
  for(int i = 1;i<=5;i++){

    char ch='A';

    for(int j = 5;j>=i;j--){

      if(j%2==0){
        printf("%d\t",sum );
        sum++;
        ch++;
      } else {
        printf("%c\t",ch );
        ch++;
        sum++;
      }
    }
    printf("\n" );
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Pattern/21july$ ./a.out
A	2	C	4	E
A	7	C	9
A	11	C
A	14
A
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Pattern/21july$
*/
