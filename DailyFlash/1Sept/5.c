#include<stdio.h>

int main(){
  int a,b;
  printf("Enter two number : ");
  scanf("%d %d",&a,&b );
  if(a==b){
    printf("Both numbers are same\n");
    return 0;

  }
  printf("maximum number is : " );


  if(a>b){
    printf("%d\n",a);
  }else{

    printf("%d\n",b);

  }
return 0;
}
