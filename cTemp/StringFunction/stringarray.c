#include<stdio.h>
void main(){

  char * str[4] = {"Shashu","Ashish","Rahul","Kanha"};
  char str2[4][10] = {"Java","Python","C","cpp"};

  for(int i=0;i<4;i++){

    printf("%s\n",*(str+i));
    printf("%s\n",*(str2+i));

  }
}
