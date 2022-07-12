//Extern dorsnt give space on ram
#include "stdio.h"
void main(){

//  printf("%d\n",a);
  printf("%d\n",sizeof(a));
}
/*abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/statement$ cc 1.c
1.c: In function ‘main’:
1.c:5:17: error: ‘a’ undeclared (first use in this function)
   printf("%d\n",a);
                 ^
1.c:5:17: note: each undeclared identifier is reported only once for each function it appears in
*/
