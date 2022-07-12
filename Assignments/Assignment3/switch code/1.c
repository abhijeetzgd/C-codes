#include <stdio.h>
void main() {
  int a = 20;

  switch(~a) {//tilde ~ is a unary bitwise negation operator.
              //negation of ~20 is -21

    case 20:
      printf("Case 20\n");
      printf("a= %d\n",a);
      break;

    case -20:
      printf("Case -20\n");
      printf("a= %d\n",a);
      break;

    case -21://so this case will execute
      printf("case -21\n");
      printf("a= %d\n",a);//20
      break;

    default:
      printf("Default\n");
      //Break; it shoulb be written as below
      break;
    }
}
/* output
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Assignment3$ cc 1.c
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Assignment3$ ./a.out
case -21
a= 20

Explaination-
tilde ~ is a unary bitwise negation operator.
negation of ~20 is -21
so it will execute case -21

*/
