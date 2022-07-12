#include<stdio.h>
void main(){
int a,n;

printf("Enter two number: " );
scanf("%d %d",&a,&n);

for(int i=a;i<=n;i++){

  if(i%2==0)
  printf("%d ",i);
}
printf("\n");
}
