#include<stdio.h>
void main(){

  printf("in void main\n");

  int main(){

      printf("in int main");
      return 1;

  }

  t=main();
  printf("%d",t);
}
