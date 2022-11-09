//WAP to find greatest of two numbers using ternery operators

#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);

    (a<b) ? (printf("%d is greater than %d",b,a)): (printf("%d is greater than %d",a,b));
  
  //syntax
  // (conditon)? (if true ):(if false)
}
