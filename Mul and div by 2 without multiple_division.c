//given number s odd or even using betwise opreter
#include<stdio.h>
  void main(){ 
      int a,mul,div;
      printf("Enter integer number a=");
      scanf("%d",&a);
      mul=a<<1;
      printf("mul=%d\n",mul);
      div=a>>1;
      printf("div=%d",div);
  }