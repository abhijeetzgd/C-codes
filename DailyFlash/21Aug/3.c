#include<stdio.h>
void main(){

int age;
char sex;

printf("Enter the age and sex : ");
scanf("%d %c",&age,&sex);

if(sex == 'f' ){

  printf("Employee will work in Urban area \n" );
} else if(sex == 'm' && age>=20 && age<=40){

  printf("Employee will work in any area \n" );
}else if(( sex=='m' && age >=40 && age <=60)){

  printf("Employee will work in urban area\n" );

}else {

  printf("Age error\n" );
}

}
