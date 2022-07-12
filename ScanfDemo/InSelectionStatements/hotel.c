#include<stdio.h>
void main(){

  int ch;


  printf("please select Hotel of your choice\n");
  printf("1:Sukh Sagar\n2:Maratha Darbaar\n3:Savita\n4:Majesty\n5:Gavran katta\nchoice = ");
  scanf("%d",&ch);

  switch (ch) {
    case 1:
      printf("You select..\n Sukh Sagar\n");
      break;

      case 2:
        printf("You select..\n Maratha Darbaar\n");
        break;

        case 3:
        printf("You select..\n Savita veg\n");
          break;

          case 4:
          printf("You select..\n Majesty\n");
            break;

            case 5:
            printf("You select..\n Gavran katta\n");
              break;


            default :
              printf("Wrong choice\nplese enter value between 1-5\n" );
              break;
  }
}
