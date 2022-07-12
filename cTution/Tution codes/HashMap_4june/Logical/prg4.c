#include<stdio.h>
void main(){
   int x=0,y=6,ans=0;
   ans=x++ || y++;

   printf("%d %d %d\n",x,y,ans);

}
