#include <stdio.h>
int main(){
unsigned int a;

switch(a = (sizeof(double) > -999)){

  case 1: printf("True\n");
    break;

  case 0: printf("False\n");
    break;
}
return 0;
}
/* explanation as it is comarison between sizeof and -1.

sizeof return unsigned characher and
-1 is treated as signed characher

so as we know range of unsigned characher is less than signed character so
comparizon return 0.

so it executes case 0

*/ 
