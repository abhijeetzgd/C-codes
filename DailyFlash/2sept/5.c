  #include<stdio.h>
void main(){

  int a,b,c;

  printf("Enter the threee number : ");
  scanf("%d %d %d",&a,&b,&c);

      if(a>b && a>c){
      printf("%d is greater than %d,%d & %d",a,a,b,c);
    }else if(b>a && b>c)
      printf("%d is greater than %d,%d & %d",b,a,b,c);
      else
      printf("%d is greater than %d,%d & %d",c,a,b,c);

printf("\n");


}
