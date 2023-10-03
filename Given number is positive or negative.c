//given number is positive or negative
#include<stdio.h> 
  void main(){ 
      float n;
      printf("Enter number n=");
      scanf("%f",&n);
      if(n>=0.0){ 
          printf("number is positive");
      }
      else{ 
          printf("number is negative");
      }
  }