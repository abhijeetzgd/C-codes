#include<stdio.h>

struct player {

  int jerNo;//4
  char pName[20];//20
  double avg;//8
  char grade;//8
  char div;
};

void main(){

struct player obj1;

printf("%ld\n",sizeof(double) );

printf("%ld\n",sizeof(struct player) );
printf("%ld\n",sizeof(obj1));
}
