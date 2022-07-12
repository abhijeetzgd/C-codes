#include <stdio.h>
int main() {

  int x = 2;
printf("x:%d\n",x<<(x+1) );
  switch(x << (x + 1)) {//2 << (2+1)
                        // 10 << (3)
                        //010000 = 16

    default:
      printf("\ndefault");

    case 1:
      printf("\n1");
      break;

    case 2:
      printf("\n2");
      break;

    case 3:
      printf("\n3");
      break;

    case 4:
      printf("\n4");
      break;

    case 8:
      printf("\n8");
      break;
}
return 0;
}
/* explanation-
2 << (2+1)

binary representation =10 << (3)
                      =010000
                      = 16
so there is no case for x=16 so
it will wxecute default statement
and there is no brreak after deafault so it executes next case tooo.
*/
