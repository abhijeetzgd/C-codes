#include<stdio.h>
void main(){
int n1, n2, n3;
printf("Enter three numbers\n");
scanf("%d %d %d",&n1,&n2,&n3 );
if(n1 >= n2 && n1 >= n3){
if(n1%2==0)
  printf("Largest number: %d is even\n",n1);
else
  printf("Largest number: %d is odd\n",n1);
}
if(n2 >= n1 && n2 >= n3){
  if(n2%2==0)
    printf("Largest number: %d is even",n2);
  else
    printf("Largest number: %d is odd\n",n2);

}
if(n3 >= n1 && n3 >= n2) {
  if(n3%2==0)
    printf("Largest number: %d is even\n",n3);
  else
    printf("Largest number: %d is odd\n",n3);

}
}
