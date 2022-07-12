#include<stdio.h>
void main(){

  for(int i=1;i<=5;i++){

    for(int j=1;j<=i;j++){

      if(i%2==0){
        printf("=\t" );
      } else {
        printf("*\t" );
      }
    }printf("\n" );
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Pattern/21july$ cc 3.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Pattern/21july$ ./a.out
*
=	=
*	*	*
=	=	=	=
*	*	*	*	*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Pattern/21july$
*/
