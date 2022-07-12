#include<stdio.h>
int main(){

  int d,m,y;
  printf("Enter date month and year\n" );
  scanf("%d %d %d",&d,&m,&y);

  if(d>=28&&m==2&&y%4!=0){
    printf("Date is Invalid\n");
    return 0;
  }

  if(d>31){
    printf("Date is Invalid\n");
    return 0;
}

  if(m>12){
    printf("Date is Invalid\n");
    return 0;
  }

  if(y<0){
      printf("Date is Invalid\n");
      return 0;
  }

  if(d<=30   && (m==2 ||m==4||m==6||m==7||m==9||m==11))
  {
      printf("Date is valid\n");
      return 0;
  }
  if(d<=30   && (m==1 ||m==3||m==5||m==6||m==8||m==10||m==12)){
    printf("Date is valid\n");
    return 0;
  }
}
