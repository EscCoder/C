/*
WAP to check if entered number is prime or not
*/



#include <stdio.h>

void main() 
{
    //perfect number is a number who's proper divisor's sum is the number itself
    int num,i;
    int sum=0;
    
    printf("Enter a number to check :");
    scanf("%d",&num);
    
    //run a loop to find perfect divisors
    //logic simillar to prime numbers
    for (i=1;i<num;i++)
    {
        if (num%i==0)
        {
            printf("%d is proper divisor\n",i);
            sum =sum+i;
        }
    }
    printf("The sum is %d\n",sum);
    
    if (sum==num)
    {
       printf("%d is a perfect number",num); 
    }
    else
    {
        printf("%d is not a perfect number",num);
    }

}
