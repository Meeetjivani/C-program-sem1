//given character is vowel or constant 
#include<stdio.h>
   void main(){ 
       char N;
       scanf("%c",&N);
       if(N=='a'||N=='e'||N=='i'||N=='o'||N=='u'){ 
           printf("character is vowel");
       }
       else{ 
           printf("character is constant");
       }
   }