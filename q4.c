//Write a program to swap values of two int variables 
//without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" %d  %d ",a,b);
    return 0;

}