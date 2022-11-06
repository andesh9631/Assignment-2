//Write a program to print unit digit
// of a given number( example x=123, unit digit =3) 
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any number of a");
    scanf("%d",&a);
    //b=a%10;
    printf("a=%d\nunit digit number is %d",a,a%10);
    //OR
    //a=555;
   // printf(" a is %d\nunit digit of given number is %d",a,a%10);
    return 0;


}