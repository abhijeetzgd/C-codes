#include<stdio.h>
#pragma pack(1)

typedef struct player {

  int jercy;
  float avg;
  char grade;
}player;

void main(){

  player virat={18,51.12,'A'};
  player Raydu={32,31.12,'B'};

printf("Virat kohli\n" );
  printf("%d\n",virat.jercy);
  printf("%f\n",virat.avg);
  printf("%c\n",virat.grade);

  printf("\nRaydu\n" );

  printf("%d\n",Raydu.jercy);
  printf("%f\n",Raydu.avg);
  printf("%c\n",Raydu.grade);


}
