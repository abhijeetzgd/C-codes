#include<stdio.h>
void main(){
  char y='y';
  int ch =0;
  int s=0;

    do{

      printf("Welcome\n" );
      printf("1.Shopping....\n" );
      printf("2.PVR....\n" );
      printf("3.Play Station\n" );
      printf("4.Food court...\n" );
      printf("Enter your choice");
      scanf("%d",&ch );


      switch(ch){
        case 1:
            printf("1.Wrogn\n,2.Lp\n,3.Indian Terrain\n" );
            printf("Enter your choice\n" );
            scanf("%d",&s );
            switch(s){
              case 1:
                printf("Wrogn\n" );
                break;
              case 2:
                printf("Lp\n" );
                break;
              case 3:
                printf("Indian Terrain\n" );
                break;
            }
            break;

        case 2:
            printf("Panipat\n" );
            break;

        case 3:
            printf("Football\n" );
            break;

        case 4:
            printf("Biryani\n" );
            break;

        default:
            printf("Wrong choice\n" );
            break;
      }

      printf("Do you want to continue\n" );
      scanf(" %c",&y);

    } while(y=='y');
}
