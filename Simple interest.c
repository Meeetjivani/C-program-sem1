//print simple interest 
#include<stdio.h>
  void main(){ 
      float p,r,t,i;
      printf("Enter float p="); 
      scanf("%f",&p);
      printf("Enter float r=");
      scanf("%f",&r);
      printf("Enter float t=");
      scanf("%f",&t);
      i=(p*r*t)/100;
      printf("i=%f",i);
  }
      