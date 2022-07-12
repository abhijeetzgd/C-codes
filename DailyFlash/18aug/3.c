/*Prg3.write a program to find whether character is Alphabet,a digit or a special character
i/p:*
o/p:* is a special character
*/

#include<stdio.h>
void main(){

   char ch;
   printf("Enter Character:");
   scanf("%c",&ch);

   if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){

       printf("%c is an Alphabet\n",ch);

   }
   else if(ch>=48&&ch<=57){
 
      printf("%c is Digit\n",ch);         
  
   }
   else{
 
      printf("%c is a Special Character\n",ch);

   }


}
