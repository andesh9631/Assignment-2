//8. Write a program to check whether the given number is even or odd
// using a bitwise operator
#include<stdio.h>
int main()
{
   int x;
   printf("ENter the value");
   scanf("%d",&x);
     int result = x&1;
    // x is number and & opter ,1 is mask
     if(result==1)
        printf("odd");
      else
         printf("even");
      
      return 0;
}

