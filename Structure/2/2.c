#include<stdio.h>
#pragma pack(1)

struct player {

  int jercy;
  float avg;
  char grade;
};

void main(){

  printf("%ld\n",sizeof(struct player));

  struct player virat={18,51.12,'A'};
  struct player Raydu={32,31.12,'B'};

}
