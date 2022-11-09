//WAP to print reverse of the input number

//i've used do while loop, for loop is too easy

#include <stdio.h>

void main()
{
    int num,digit;
    int rev_num=0;
    
    printf("Enter a number :");
    scanf("%d",&num);
    
    do{
        digit= num %10;
        rev_num = (rev_num*10)+ digit;
        num=num/10;
    }while(num!=0);

    printf("The number reversed is %d",rev_num); 
}
