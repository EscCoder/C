// WAP to check if the given year is a leap year or not

#include <stdio.h>

void main() 
{
    int yr;
    
    printf("Enter a year :");
    scanf("%d",&yr);
    
    if (yr%400==0 && yr%100==0)
    {
        printf("The yr %d is leap year",yr);
    }    
    else if (yr%4==0 && yr%100!=0)                       //works as elif in python
    {
        printf("The yr %d is leap year",yr);
    }
    else
    {
        printf("The year is not a leap year");
    }

}
