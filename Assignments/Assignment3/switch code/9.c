/*
Write a program which accepts the month no provide that no to switch case and print the no. of
days in that month
Input : Enter month number : 7
Output : July has 31 days
*/

#include<stdio.h>
void main(){

  int m;
  printf("Enter the month number\n");
  scanf("%d",&m);

  switch(m){

    case 1:
      printf("January has 31 days");
      break;


    case 2:
      printf("Feb has 28 days");
      break;


    case 3:
          printf("March has 31 days");
          break;


              case 4:
              printf("April has 30 days");
              break;


                  case 5:
                  printf("May has 31 days");
                  break;


                      case 6:
                      printf("Jun has 30 days");
                      break;


                          case 7:
                          printf("July has 31 days");
                          break;


                              case 8:
                              printf("August has 31 days");
                              break;


                                  case 9:
                                  printf("Saptember has 30 days");
                                  break;


                                      case 10:
                                      printf("October has 31 days");
                                      break;


                                          case 11:
                                          printf("November has 30 days");
                                          break;


                                              case 12:
                                              printf("December has 31 days");
                                              break;
  }
printf("\n");
}
