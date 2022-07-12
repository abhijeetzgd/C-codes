#include<stdio.h>
void main(){

  int arr[10]={1,2,3,4,5,6,7,8,9,10};

  int *ptr =  arr;
  /*
    it will point to first location
  */

  ptr = ptr+2;
  /* as ptr is now incremented by 2
  ptr = ptr + 2*sizeof(int)
  i.e it will point to 2nd location
  */
  printf("%d\n",*ptr);

  ptr =  ptr + 3;
  /* as ptr is now incremented by 3
  ptr = ptr + 3*sizeof(int)
  i.e it will point to 5th location
  */
  printf("%d\n",*ptr);

  ptr++;
  /* as ptr is now incremented by 1
  ptr = ptr + 1*sizeof(int)
  i.e it will point to 1st location
  */
  printf("%d\n",*ptr);

}
