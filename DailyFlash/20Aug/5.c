#include<stdio.h>
void main(){

  int a,b,c,d,e;
  printf("Enter Marks For Physics,Chemistry,Mathematics,Computer & Biology : ");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

  if(a+b+c+d+e >= 90 )
  printf("Grade A.\n" );

    if(a+b+c+d+e >= 80 && a+b+c+d+e <= 90)
    printf("Grade B.\n" );

      if(a+b+c+d+e >= 70 && a+b+c+d+e <= 80)
      printf("Grade C.\n" );
        if(a+b+c+d+e >= 60 && a+b+c+d+e <=70)
        printf("Grade D.\n" );
          if(a+b+c+d+e >= 50 && a+b+c+d+e <= 60)
          printf("Grade E.\n" );
            if(a+b+c+d+e <= 40)
            printf("Grade F.\n" );
}
