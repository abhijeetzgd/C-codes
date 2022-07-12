#include "stdio.h"

void main(){

  int marks = 70;
  int compMarks = 90;

  if(marks > 70){

    printf("FC/Modern?\n");

    if(compMarks>80){

      printf("FC-bcs\n");
    } else {

        printf("Modern-bsc\n");
    }
  } else {
    printf("Sports person\n" );
  }
  printf("Outof If-else\n" );
}
