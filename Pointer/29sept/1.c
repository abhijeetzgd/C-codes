#inclpde<stdio.h>
void main(){

  int a1[]={10,20,30,40,50};
  int a2[]={60,70,80,90,100};
  int a3[]={110,120,130};

//Array Address

printf("arr1[0] = %p\n",a1);//200
printf("arr1[4] = %p\n\n",&a1[4]);//216


printf("%p\n",a1);//200
printf("%p\n",a2);//220
printf("%p\n",a3);//194

//
printf("%p\n",&a1);//200
printf("%p\n",&a2);//220
printf("%p\n",&a3);//194


}
