#include<stdio.h>
void main(){

  int x,y,ch;

  printf("Enter values for x and y \n" );
  scanf("%d %d",&x,&y );//25 5

  printf("Enter your choice\n");
  printf("1:add\n2:sub\n3:Mul\n4:div\nchoice = ");
  scanf("%d",&ch);

  switch (ch) {
    case 1:
      printf("add = %d\n",x+y);
      break;

      case 2:
        printf("sub = %d\n",x-y);
        break;

        case 3:
          printf("Mul = %d\n",x*y);
          break;

          case 4:
            printf("div = %d\n",x/y);
            break;

            default :
              printf("Wrong choice\nplese enter value between 1-4\n" );
              break;
  }
  printf("Outoff switch\n" );
}
