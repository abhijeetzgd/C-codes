//Q10. Write a program to print all the numbers that can divide 65.
//Ip -> 65
#include<stdio.h>
void main(){
    int a;
    printf("Enter the number\n" );
    scanf("%d",&a);

    for(int i=1;i<=(a/2);i++){
      if(a%i==0){
        printf("%d ",i);
      }
    }
    printf("\n" );
}
