#include<stdio.h>
void main(){

  int a1[]={10,20,30,40,50};
  int a2[]={60,70,80,90,100};
  int a3[]={110,120,130};

//Array Address

printf("arr1[0] = %p\n",a1);//200
printf("arr1[4] = %p\n\n",&a1[4]);//216

printf("arr2[0] = %p\n",a2);//220
printf("arr2[4] = %p\n\n",&a2[4]);//236

printf("arr3[0] = %p\n",a3);//194
printf("arr3[4] = %p\n\n",&a3[2]);//202


//
printf("%p\n",&a1);//200
printf("%p\n",&a2);//220
printf("%p\n",&a3);//194


}
