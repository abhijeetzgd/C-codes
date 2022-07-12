#include<stdio.h>
void main(){
int sum=0,a,b;
printf("Enter the first and last number");
scanf("%d%d",&a,&b);

while(a<=b){
  if(a%5==0){
  sum = sum + a;
}
a++;

}
printf("sum = %d\n",sum );

}
