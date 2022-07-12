/*
Program 2: Write a Program that uses Nested Switch Case, Take Real-Time Scenario
and write a code around that.
*/

#include<stdio.h>
#include<stdlib.h>
#include"abhijeet.h"
void main(){

  int ch =3;
  int a = 1;
  char y;
  red();
  printf("Core2Web\n\n\n\n");
  red();
  printf("Powered by\n" );
  blue();
  printf("BiEncaps\n" );
  reset();
int n,addQuetion=0,solveQuetion=0,addPost=0;
do{

  printf("What you want see\n" );
  printf("Enter Your Choice\n" );
  printf("1.Global Section\n" );
  printf("2.Video Lectures\n" );
  printf("3.Forum\n" );
  printf("4.Content\n" );
  printf("5.Profile\n" );
  scanf("%d",&ch );
  printf("\n");

  switch (ch){

    case 1:

      printf("Now you are in Global section\nHere you can read technical content and post too\nwhat you wabt to do\n\n");
      printf("1.Post techincal Meme\n" );
      printf("2.Read techincal Content\n" );
      scanf("%d",&a);
      printf("\n");
      switch (a) {
        case 1:
        printf("Posting Technical Meme....\n" );
        addPost++;
        break;

        case 2:
          printf("Reading Techincal Article....\n" );
          break;

      }//first nested switch end
      printf("\n" );
      break;

      case 3:

      printf("Now you are in Forum\nHere you can ask techincal Doubt and also give solution for technical quetions.\nwhat you wabt to do\n");
      printf("1.Add quetion\n" );
      printf("2.Answer a Quetions\n" );
      scanf("%d",&a);
      printf("\n");

      switch (a) {
        case 1:
        printf("Adding a Quetion in selected Tab(Batch)....\n\n" );
        addQuetion++;
        break;

        case 2:
          printf("Solving a quetion from selected Batch....\n\n" );
          solveQuetion++;
          break;

      }//second Nested switch end
      printf("\n");
      break;

      case 2:

        printf("Now you are in video section\nHere you can See Video lecture of our Sir\nwhich lecture you want to see\n");
        printf("1.Python\n\n" );
        printf("2.PPA\n\n" );
        printf("3.Java\n\n" );
        scanf("%d",&a);
        printf("\n");

        switch (a) {
          case 1:
            printf("Now you are Watching Python lecture....\n\n" );
            break;

          case 2:
            printf("Now you are Watching PPA lecture....\n\n" );
            break;

          case 3:
            printf("Now you are Watching Java lecture....\n\n" );
            break;


      }//3rd switch end
      printf("\n" );
      break;

      case 4:


      printf("Now you are in Content section\nHere you can See \n");
      printf("1.DailyFlash\n" );
      printf("2.CodeSnippets\n" );
      printf("3.Concept\n" );
      printf("4.Interview\n" );
      scanf("%d",&a);
      printf("\n");

      switch (a) {
        case 1:
          printf("Now you are In dailyflash Section....\n\n" );
          break;

        case 2:
          printf("Now you are In CodeSnippets Section....\n\n" );
          break;

        case 3:
          printf("Now you are Concept Section....\n\n" );
          break;

        case 4:
          printf("Now you are Interview Quetions Section....\n\n" );
          break;

    }//4th switch end
    printf("\n" );
    break;

    case 5:
      printf("Now you are in Profile\n\n" );
      printf("Number of Post %d\n",addPost );
      printf("Number of Quetions ask %d\n",addQuetion );
      printf("Number of Quetions solve %d\n\n",solveQuetion );
      break;

  }  //main switch end
  printf("Do you want to continue press Y\n");
  scanf(" %c",&y );
}while(y == 'y' || y =='Y');

}
