//WAP to input a number and a digit and find how many times that digit occurs


#include <stdio.h>

void main() 
{
    int num , find;
    int flag=0, digit;
    
    printf("Enter a number :");
    scanf("%d",&num);
    
    printf("Enter the digit we have to find: ");
    scanf("%d",&find );

    do{
        digit=num%10;
        if (digit==find)
        {
            flag++;
        }
        num=num/10;
    }while(num!=0);
    
    
    printf("The number %d occured %d times",find,flag);
    
    
}

