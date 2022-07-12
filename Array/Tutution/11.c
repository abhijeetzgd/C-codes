#include<stdio.h>

void main(){

  int stud_age[5]={10,20,30};

  scanf("%d",&stud_age[0]);
  scanf("%d",&stud_age[1]);
  scanf("%d",&stud_age[2]);
  scanf("%d",&stud_age[3]);
  scanf("%d",&stud_age[4]);


  printf("%d\n",stud_age[0]);
  printf("%d\n",stud_age[1]);
  printf("%d\n",stud_age[2]);
  printf("%d\n",stud_age[3]);
  printf("%d\n",stud_age[4]);

}
/*output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Array/Tutution$ cc 10.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Array/Tutution$ ./a.out
10
20
30
0
0
*/
