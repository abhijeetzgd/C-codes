#include<stdio.h>
void main(){

  int rupee;
  int daller=1.23;
  printf("Enter a amt of rupees : ");
  scanf("%d",&rupee );
  daller  =rupee/70;
  int pt = rupee%70;
  printf("Equivalent amount of daller = %d.%d\n",daller,pt);

}
