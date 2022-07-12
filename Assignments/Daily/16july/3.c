/*
Program 3. Write a C Program that print Fahrenheit-to-Celsius conversion table for 0
to 100 degree F.
*/
#include<stdio.h>
void main(){
  float f,c;

  printf("Enter temperature in Fahrenheit :" );
  scanf("%f",&f );
  c=(f-32)/1.8;

  printf("%f is the temperature in Celsius\n",c );

}
/*
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter temperature in Fahrenheit :33.8
1.000000 is the temperature in Celsius
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$ ./a.out
Enter temperature in Fahrenheit :54
12.222222 is the temperature in Celsius
abhijeetzgd@abhijeetzgd-ThinkPad-E490:~/c/Assignments/Daily/16july$
*/
