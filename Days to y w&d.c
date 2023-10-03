//print days to year,week&day 
#include<stdio.h>
  void main(){ 
      int day,y,w,d;
      printf("Enter day=");
      scanf("%d",&day);
      y=(day/365);
      w=(day%365)/7;
      d=(day-((y*365)+(w*7)));
      printf("%d\n",y);
      printf("%d\n",w);
      printf("%d\n",d);
  }