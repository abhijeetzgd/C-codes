//Program 45. C Program to check if two given matrices are identical

#include<stdio.h>
void main(){
  int r1,c1,r2,c2;
  printf("Enter size of Matrix1 : ");
  scanf("%d%d",&r1,&c1);

  printf("Enter size of MAtrix2 : ");
  scanf("%d%d",&r2,&c2);

  int m1[r1][c1],m2[r2][c2];

  printf("Enter elements of First matrix\n");

    for(int i=0;i<r1;i++){
      for(int j=0;j<c1;j++){
        scanf("%d",&m1[i][j]);
}}

printf("Enter elements of second matrix\n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      scanf("%d",&m2[i][j]);
}}
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      if(m1[i][j]!=m2[i][j]){
        printf("both matrices are not identical\n");
      return ;

    }
    }
  }

  printf("both matrices are identical\n");

}
