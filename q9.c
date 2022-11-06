//9. Write a program to print size of an int, 
//a float, a char and a double type variable

#include<stdio.h>
int main()
{
    int a;
   // float b;
    //char g;
   // double d;
     
    a=sizeof(int );
    printf("int consume %d bytes",a);
     printf("\n");
    a=sizeof(float);
    printf("float consume %d bytes",a);
    printf("\n");
     a=sizeof(char);
    printf(" char consume %d bytes",a);
     printf("\n");
    a=sizeof(double);
    printf("double consume %d bytes",a);
 //OR
//   b=sizeof(int);
//   printf("%f",b);
//OR
// g=sizeof(char);
// printf("%d",g);
//OR
// d=sizeof(char  );
// printf("%lf",d);


    return 0;
}