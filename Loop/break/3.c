#include<stdio.h>
void main(){
  int num=0;
  for(int i=0;i<=10;i++){
    printf("Enter even number\n" );
    scanf("%d",&num);
    if(num%2==0)
      printf("%d is Even number\n",num );
    else
      break;
  }
}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Loop/break$ ./a.out
Enter even number
4
4 is Even number
Enter even number
8
8 is Even number
Enter even number
800088800
800088800 is Even number
Enter even number
9
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Loop/break$
*/
