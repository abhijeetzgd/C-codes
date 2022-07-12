#include<stdio.h>
void main(){

  int a=5,b=10,ans=0;
//  ans = a +++++ b;//l value required
 ans = a ++ + ++ b;
 //ans =a++ + ++b
    printf("%d %d %d\n",a,b,ans );
}
