#include<stdio.h>
void main(){

  int x=10 ,y=20,z=30,ans=0;

  printf("%d\n",x+y);
  printf("%d\n",x-y);
  printf("%d\n",x/y);
  printf("%d\n",x%y);
  printf("%d\n",x*y);

ans = x+y-z;
printf("%d\n",ans);

ans=x*y/z;
printf("%d\n",ans);

ans=x+y/z-x*y;
printf("%d\n",ans);
//x+(y/z)-(x*y)
//-590
}
/*
output:
30
-10
0
10
200
0
6
-190
*/
