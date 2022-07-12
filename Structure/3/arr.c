#include<stdio.h>

typedef struct Friend{

  char *name;
  char status;
}f;

void main(){

  f obj1 = {"ashish",'y'};
  f obj2 = {"rahul",'n'};
  f obj3 = {"kanha",'n'};

  f arr[3]={obj1,obj2,obj3};

  for(int i=0;i<3;i++){

    printf("friend name = %s\nrelation status = %c\n\n",arr[i].name,arr[i].status);
  }

}
