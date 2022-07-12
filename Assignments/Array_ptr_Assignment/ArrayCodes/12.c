/*Program 12: Write a C program that has four variables of different datatypes, store their
addresses into pointers of respective types and print addresses of both variables and pointers
and Print values of variables by dereferencing the pointers.
*/

#include<stdio.h>
void main(){

  int i=10;
  float f =101.34f;
  char c ='c';
  double d = 10100;

int * iptr = &i;
float *fptr = &f;
char *cptr = &c;
double *dptr = &d;

printf("Value inside variale i = %d\n",*iptr);
printf("Address of int variable i = %p\n",iptr);
printf("Address of pointer pointing to variable i = %p\n\n",&iptr);

printf("Value inside variale f = %f\n",*fptr);
printf("Address of int variable f = %p\n",fptr);
printf("Address of pointer pointing to variable f = %p\n\n",&fptr);

printf("Value inside variale c = %c\n",*cptr);
printf("Address of int variable c = %p\n",cptr);
printf("Address of pointer pointing to variable c = %p\n\n",&cptr);

printf("Value inside variale d = %f\n",*(*&dptr));
printf("Address of int variable d = %p\n",dptr);
printf("Address of pointer pointing to variable d = %p\n\n",&dptr);

}
