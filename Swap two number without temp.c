//swap two number without temp
#include<stdio.h> 
    void main(){ 
        int a,b;
        printf("Enter integer number a= \nb=");
        scanf("%d %d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("a = %d b = %d",a,b);
    }