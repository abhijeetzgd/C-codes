/*
Program 30. C/C++ Program for Majority Element(No of repeated)
	Input: arr1 [12 ,54,7,87,98,56,12,5]

	output :
		count =1
		number is 12
	test cases :
		1.T =4------------> number of times the user shud take the input in array and print the largest number
		2.No negative value allowed shud handel the case
*/
#include<stdio.h>
void main(){

  int n,cnt=0,max =0,temp;
  printf("Enter size \n");
  scanf("%d",&n);
  int arr[n];

printf("Enter elements of array\n");
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
}

  for(int i=0;i<n;i++){
    cnt=0;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
          cnt++;
        }
    }

    if(cnt>max){
      max = cnt;
      temp = arr[i];
}



  }

  printf("maximum repeated element is %d and count = %d\n",temp,max);

}
