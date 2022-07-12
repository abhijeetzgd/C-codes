#include<stdio.h>
void main(){

  float unit,rate,price;

  printf("Enter the amount of unit consume : ");
  scanf("%f",&unit );

  if(unit <= 50){
    rate = 0.50;
    price = rate * unit;
    printf("Price for %f unit is %f\n",unit,price );
  } else if(unit >= 50 && unit <=150){
    rate = 0.50;
    price = rate * 50;
    price = price + (unit - 50)*0.75;
    printf("Price for %f unit is %f\n",unit,price );
  } else if(unit >= 150 && unit <=250){
    rate = 0.50;
    price = rate * 50;
    price = price + 100 * 0.75+(unit - 150)*1.2;
    printf("Price for %f unit is %f\n",unit,price );
  }else{
    printf("Price for %f unit is %f\n",unit,unit*1.5 );

  }

}
