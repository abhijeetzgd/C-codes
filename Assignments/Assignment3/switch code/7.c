/*
Q7
Write a program in c in which students should enter marks of 5 different subjects. If all subject
having above passing marks add them and provide to switch case to print grades(first class second
class), if student get fail in any subject program should print “You failed in exam”
*/

#include<stdio.h>
void main(){
  int m1,m2,m3,m4,m5;

  printf("Enetr marks of 5 subject\n" );
  scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

if(m1 > 30 && m2 > 30 && m3 > 30 && m4 > 30 && m5 > 30){

  int sum = m1+ m2 + m3 + m4 + m5;

    if(sum>400){
      printf("First class\n" );
    } else {
      printf("Second class\n" );
    }

} else {
  printf("you Fail in exam \n" );
}

}
