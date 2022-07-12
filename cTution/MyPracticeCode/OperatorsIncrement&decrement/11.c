extern  int  printf(const char *,...);

void main(){

  int a=5 ,b=16;
  b=b++ + b++ + ++a / a++;//7,34
  printf("%d %d\n",a,b);
}
