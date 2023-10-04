//given number s odd or even using betwise opreter
#include<stdio.h>
  void main(){ 
      int a;
      printf("Enter integer number a=");
      scanf("%d",&a);
      if( a & 1 == 'o'){ 
          printf("number is even\n");
      }
      else{ 
          printf("number is odd\n");
      }
  }