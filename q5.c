//Write a program to input a three-digit number and 
//display the sum of the digits.
#include<stdio.h>
int main()
{
  int a,i, reminder=0,sum=0;
  printf("Enter the any number of a");
  scanf("%d",&a);
  //for(i=1;i<=3;i++)
 //{ 
  reminder=a%10;
  a=a/10;
  sum=sum+reminder;
 //}
  reminder=a%10;
  a=a/10;
  sum=sum+reminder;

  reminder=a%10;
  a=a/10;
  sum=sum+reminder;

 
  printf("Sum of three digit is %d ",sum);
  return 0;





}