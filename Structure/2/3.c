#include<stdio.h>
#pragma pack(1)

struct player {

  int jercy;
  float avg;
  char grade;
};

void main(){

  printf("size of struct = %ld\n",sizeof(struct player));

  struct player virat={18,51.12,'A'};
  struct player Raydu={32,31.12,'B'};

printf("Virat kohli\n" );
  printf("%d\n",virat.jercy);
  printf("%f\n",virat.avg);
  printf("%c\n",virat.grade);

  printf("\nRaydu\n" );

  printf("%d\n",Raydu.jercy);
  printf("%f\n",Raydu.avg);
  printf("%c\n",Raydu.grade);


}
