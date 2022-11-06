//Write a program to swap values of
// two int variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
   
   c=a;
    a=b;
    b=c;
    printf("swap value of a is  %d and b is %d ",a,b);
    return 0;
}