#include<stdio.h>

struct Company{

  struct frontEnd{
    int teamsize;
    char tech[20];
  } fend;

  struct backEnd{
    int teamsize;
    char tech[20];
  } bend;

  struct Devops{
    int teamsize;
    char tech[20];
  } dops;

};

void main(){
/*
  cmp.fend={2,"reactjs"};
  cmp.bend={3,"node"};
  cmp.dops={2,"aws"};
*/
struct Company  cmp = {{2,"reactjs"},{3,"node"},{2,"aws"}};
  printf("front End \nteam size = %d\nTechnology = %s\n\n",cmp.fend.teamsize,cmp.fend.tech);
  printf("front End \nteam size = %d\nTechnology = %s\n\n",cmp.bend.teamsize,cmp.fend.tech);
  printf("front End \nteam size = %d\nTechnology = %s\n\n",cmp.dops.teamsize,cmp.fend.tech);


}
