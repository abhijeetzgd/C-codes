#include<stdio.h>
#include<string.h>
void main()
{
   int n1,n2,flag=0;
   char name1[100];
   char name2[100];

   printf("Enter number of character for string1\n" );
   scanf("%d",&n1);

   printf("Enter string1\n");

   for(int i=0;i<n1;i++){
     scanf(" %c",&name1[i]);
   }

   printf("Enter number of character for string2\n" );
   scanf("%d",&n2);

   printf("Enter string1\n");

   for(int i=0;i<n2;i++){
     scanf(" %c",&name2[i]);
   }
   if(n1==n2){
   for(int i=0;i<n1;i++){
     if(name1[i] == name2[i]){
       flag =0;
     }else{
       flag =1;
       break;
     }
   }
}else{
  printf("Both strings are different\n");
}

if(flag==0){
  printf("Both strings are same\n");
}else{
  printf("Both strings are different\n");

}
//   printf("\n");
}
