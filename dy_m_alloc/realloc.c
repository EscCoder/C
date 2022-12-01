//re alloc
#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int i,n;
    int *ptr;
    
    printf("RE allocation: initial values in memory location are retained\n");
    printf("This is to demonstrate the use of realloc() function, \na predefined function used in dynamic memory allocation:\n");
    printf("\tEnter the number of intergers :\n");
    scanf("%d",&n);
    printf("Now we will create a dynamic memory location malloc () as per our requirement of %d\n",n);
    
    ptr = (int* )malloc(n*sizeof(int));      //size of integer offered by the compiler
    // type cast the void pointer returned by malloc
    
    if (ptr==NULL)
    {
        printf("No memory space left :");
        exit(1);
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
    
    
    
    printf("\nWe will now increase the number of memory allocation in runtime:\n");
    
    ptr = (int*)realloc(ptr,2*sizeof(int));
    // we now have previous memory spaces+ 2new int size memory spaces
    
    printf("Your wish has been granted ,\nyou can enter two more integers:\n");
      
    if (ptr==NULL)
    {
        printf("No memory space left :");
        exit(1);
    }
    
    for (i=n;i<n+2;i++)
    {
        printf("Enter integer - %d->",i+1);                //ptr is pointing to base address
        scanf("%d",ptr+i);                                // progress to next memory block 
    }
    
    for (i=0;i<n+2;i++)
    {
        printf("%d\t",*(ptr+i));                          //print the content at (ptr+i)^th memory location
    }
    return 0;
}
