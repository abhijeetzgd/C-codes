/*prg1.write a program to check whether the character is Alphabet or   not 
i/p:V
o/p:V is an Alphabet
*/

#include<stdio.h>
void main(){

    char ch;
    printf("Enter character :");
    scanf("%c",&ch);

    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){

       printf("%c is an Alphabet\n",ch);

    }
    else{

      printf("%c is not an Alphabet\n",ch);

    }



}
