#include<stdio.h>
void main(void) {
  int aNum = 0;
  char aChar;
  if(!aNum){
    printf("Inside First If...\n");
    aNum += 20;
    aChar = "T";
  }
  if(aNum % 4 != 0){
    printf("Inside Second If...\n");
    aNum -= 20;
    aChar = "F";
  }
  if(aNum == 0) {
    printf("Inside Third If...\n");
    aChar = "T";
  }
  printf("After all IF, Values Are..., %d & %c\n", aNum, aChar);
}
