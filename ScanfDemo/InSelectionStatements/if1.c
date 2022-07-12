#include<stdio.h>
void main(){
  int x,y,z;
  printf("Enter three no.\n");
  scanf("%d %d %d",&x,&y,&z );//30 20 50

  if(x>y){//30 > 20
      if(x>z){//30 >50
            printf("%d is greater\n",x);
      } else {
        printf("%d is greater\n",z);
      }

  } else {
    if(y>z){
      printf("%d is greater\n",y );
    } else {
      printf("%d is greater\n",z );
    }

  }

}
