#include<stdio.h>
void main(){

    int r1,r2,i1,i2,i,r;
    printf("Enter real and imaginary part of first number : ");
    scanf("%d %d",&r1,&i1);
    printf("Enter real and imaginary part of second number : ");
    scanf("%d %d",&r2,&i2);
  r = r1 + r2;

  i = i1+ i2;
  if(i>=10){
    i=i%10;
    r++;
  }
printf("Addition of two number = %d + i%d\n",r,i);

}
