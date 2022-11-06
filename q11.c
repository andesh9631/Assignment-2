//11. Write a program to input a number from the user
// and also input a digit. Append a digit in the number
// and print the resulting number. (Example - number=234
 //and digit=9 then the resulting number is 2349)

#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter number");// a==2349
    scanf("%d",&a);
      printf("\nENter the digit");
      scanf("%d",&b);//b==9
      
     a=a*10;
     result=a+b;
     printf("result is %d ",result);
     return 0;



}