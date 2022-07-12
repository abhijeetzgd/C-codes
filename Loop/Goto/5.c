#include<stdio.h>
void main(){
    int x=10;

    fordemo:
        printf("Printing........\n");

    for (int i=1;i<=x;i++){
      printf("Inside For\n");

      goto fordemo;
    }

}
