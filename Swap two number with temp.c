//swap two number with temp
#include<stdio.h> 
    void main(){ 
        int a,b,temp;
        printf("Enter integer number a= \nb=");
        scanf("%d %d",&a,&b);
        temp=a;
        a=b;
        b=temp;
        printf("a = %d b = %d",a,b);
    }