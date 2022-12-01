//To uderstand the use of malloc pre defined function

#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int i,n;
    int *ptr;
    
    printf("Memory allocation: initial value is garbage\n");
    printf("This is to demonstrate the use of malloc() function, \na predefined function used in dynamic memory allocation:\n");
    printf("\tEnter the number of intergers :\n");
    scanf("%d",&n);
    printf("Now we will create a dynamic memory location as per our requirement of %d\n",n);
    
    ptr = (int* )malloc(n*sizeof(int));      //size of integer offered by the compiler
    // type cast the void pointer returned by malloc
    
    if (ptr==NULL)
    {
        printf("No memory space left :");
       
    }
    
    for (i=0;i<n;i++)
    {
        printf("Enter integer - %d->",i+1);                //ptr is pointing to base address
        scanf("%d",ptr+i);                                // progress to next memory block 
    }
    
    for (i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));                          //print the content at (ptr+i)^th memory location
    }
}
