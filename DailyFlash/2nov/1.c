#include<stdio.h>
#include<string.h>
void main()
{
   int n;
   char name[100];

   printf("Enter number of character\n" );
   scanf("%d",&n);

   printf("Enter a string to reverse\n");

   for(int i=0;i<n;i++){
     scanf(" %c",&name[i]);
   }

   for(int i=0;i<n/2;i++){
     char temp = name[i];
     name[i] = name[n-1-i];
     name[n-1-i] = temp;
   }

   printf("Reverse of the string : ");
   for(int i=0;i<n;i++){
     printf("%c ",name[i]);
   }
   printf("\n");
}
