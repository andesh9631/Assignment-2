//13. Write a program to take a three-digit number from the user and
// rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
     int result=0, x,reminder=0;
     printf("Enter the value of x:");
     scanf("%d",&x);
       reminder=x%10;
       x=x/10;

        result=reminder*100+x;
       printf("reminder is %d ",result);
       return 0;
    
}