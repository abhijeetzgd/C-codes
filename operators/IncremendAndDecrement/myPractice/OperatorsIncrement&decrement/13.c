#include<stdio.h>
void main(){
  int a=4,b=5,ans;

  ans = ++a + ++a/++b * a++ - b++;
  printf("%d",ans);
}
