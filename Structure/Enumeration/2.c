#include<stdio.h>

enum days{

  sun = 10,
  mon = 20,
  tue = 30
};

void main(){

  enum days obj={100,200,300};//this will assign value to object not to memeber of union

  printf("%d\n",obj);
  printf("%d\n",sun);
  printf("%d\n",mon);
  printf("%d\n",tue);

}
