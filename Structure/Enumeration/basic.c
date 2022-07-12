#include<stdio.h>

struct Normal{

  int x;
  double y;
};

void main(){

  struct Normal obj = {10,20.5};
  printf("%d %lf\n\n",obj.x,obj.y);
}
