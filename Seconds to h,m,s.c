//print scenods into hours,minutes&seconds 
#include<stdio.h> 
    void main(){ 
        int sec,h,m,s;
        printf("Enter integer sec=");
        scanf("%d",&sec);
        h=(sec/3600);
        m=(sec-(h*3600))/60;
        s=(sec-(h*3600)-(m*60));
        printf("H:M:S - %d %d %d",h,m,s);
    }