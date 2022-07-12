#include<stdio.h>
#pragma pack(1)

struct player {

  int jercy;
  float avg;
  char grade;
}rohit={45,47.54,'A'},Raydu={32,42.52,'B'};

void main(){
  struct player virat={18,50.56,'A'};

  printf("Virat kohli\n" );
    printf("%p\n",&virat.jercy);
    printf("%p\n",&virat.avg);
    printf("%p\n",&virat.grade);

  printf("\nRohit\n" );
    printf("%p\n",&rohit.jercy);
    printf("%p\n",&rohit.avg);
    printf("%p\n",&rohit.grade);

  printf("\nRaydu\n" );
    printf("%p\n",&Raydu.jercy);
    printf("%p\n",&Raydu.avg);
    printf("%p\n",&Raydu.grade);


}
