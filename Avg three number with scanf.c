//avg three number with scanf
#include<stdio.h>
  void main(){
      int a,b,c,sum;
      float avg;
      printf("Enter a integer value");
      scanf("%d %d %d",&a,&b,&c);
      sum=a+b+c;
      avg=sum/3;
      printf("%f",avg);
  }