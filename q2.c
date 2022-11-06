//Write a program to print a given
// number without its last digit.
#include<stdio.h>
int main()
{
    int a,b;
    printf("ENter the any number of a");
    scanf("%d",&a);
    b=a/10;
    printf("print whitout last digit %d",b);
    return 0;
   /*OR 
    int a;
     printf("ENter the any number of a");
     scanf("%d",&a);
     printf(" a=%d print whitout last digit %d",a,a/10);
     */

}