/*write a program to check whether the character is Vowel or Consonant
 i/p:E
o/p:E is a Vowel
*/

#include<stdio.h>
void main(){
 
         char ch;
         printf("Enter Character:");
         scanf("%c",&ch);
 
         if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ){

             printf("%c is a Vowel\n",ch);

         }
         else if(ch>='A'&&ch<='Z' || ch>='a'&&ch<='z'){

              printf("%c is a Consonant\n",ch);
 
         }
         else{

             printf("%c is not an Alphabet\n",ch);
 
         }
   

}
