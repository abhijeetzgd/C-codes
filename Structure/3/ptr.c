#include<stdio.h>

typedef struct Bielearn{

  char *type;
  int size;
}Bielearn;

void main(){

  Bielearn obj ={"Biencaps",8};

  Bielearn *ptr = &obj;


  printf("type = %s\nteamsize = %d\n\n",ptr -> type,ptr->size);

  printf("type = %s\nteamsize = %d\n\n",obj.type,obj.size);

  printf("type = %s\nteamsize = %d\n\n",(*ptr).type,(*ptr).size);

}
