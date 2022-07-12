/*
write a program which shows menu card of burger house and give the customer the
customer choice of veg and non veg.and each of them consist of 4 different types of burger
print the order at the last and ask thm again for ore using do while and nested switch

i/p
wc to burger house
plz select
veg /non veg

1
a.veg tikki
b.allo tikki
c.mashroom veggie cheese burger
d.peanut butter sweet potato burger
*/

#include<stdio.h>
void main(){

  int ch,n;
  printf("!!Welcome To Burger King\n!!" );

  printf("Enter what you want to eat\n1.veg\n2.Non veg\nEnter your choice\n" );
  scanf("%d",&ch );

  switch(ch){

    case 1:
          printf("Welocome to veg section\n" );
          printf("1.Veg Tikki Burger..\n" );
          printf("2.Allo tikki Burger..\n" );
          printf("3.cheese Burger..\n" );
          printf("4.mashroom Burger..\n" );
          printf("Enter Your choice\n" );
          scanf("%d",&n );

          switch(n){
            case 1:
                  printf("Pay 99 for veg Tikki Burger\n" );
                  break;

            case 2:
                  printf("Pay 129 for Allo Tikki Burger\n" );
                  break;

            case 3:
                  printf("Pay 149 for cheese Burger\n" );
                  break;

            case 4:
                  printf("Pay 169 for Mashroom Burger\n" );
                  break;

            default:
                    printf("Wrong choice\n" );

          }
          break;

      case 2:    
          printf("Welocome to Non veg section\n" );
          printf("1.Chicken Tikki Burger..\n" );
          printf("2.fish Burger..\n" );
          printf("3.chicken cheese Burger..\n" );
          printf("Enter Your choice\n" );
          scanf("%d",&n );

          switch(n){
            case 1:
                  printf("Pay 99 for chicken Tikki Burger\n" );
                  break;

            case 2:
                  printf("Pay 129 for Fish Burger\n" );
                  break;

            case 3:
                  printf("Pay 149 for chicken cheese Burger\n" );
                  break;

            default:
                  printf("Wrong choice\n" );

          }
  }
}
