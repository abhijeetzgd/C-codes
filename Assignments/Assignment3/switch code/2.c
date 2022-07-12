#include <stdio.h>
void main() {

  int x = 10;
  int y = 20;

  switch(x) {//As x=10 but there is no case for intger so it might give error

    case x:                         //case 'x'
      printf("Case 10\n");
      printf("x= %d\n",x);
      break;

    case y:
      printf("Case 20\n");          //case 'y'
      printf("y= %d\n",y);
      break;

    default:
      printf("Default\n");
      break;
}
}//this is missing in pdf file
/*
output-
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Assignment3$ cc 2.c
2.c: In function ‘main’:
2.c:9:5: error: case label does not reduce to an integer constant
     case x:
     ^~~~
2.c:14:5: error: case label does not reduce to an integer constant
     case y:
     ^~~~

Explanation-
In the switch case statement,
a case can only have integral constant values
i.e. integer or character type constant value.
but they dont use ' ' for representing Case.
so that error occur
*/
