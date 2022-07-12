#include<stdio.h>
#include<unistd.h>
void main(){

  for(int i=1; i<=5;i++){

    for(int j=5; j>=i;j--){

      if(j==5 || i==1){
          printf("*\t");
      }
      else {
          printf("=\t" );
      }
    }printf("\n");
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Pattern/21july$ ./a.out
*	*	*	*	*
*	=	=	=
*	=	=
*	=
*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Pattern/21july$
*/
