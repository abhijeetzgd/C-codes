#include<stdio.h>
void main(){
int sum=0,a,b;
printf("Enter the first and last number");
scanf("%d%d",&a,&b);

for(int i=a;i<=b;i++){
  sum = sum + i;
}
printf("sum = %d\n",sum );

}
