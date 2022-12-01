// To demostrate the use of calloc() function
#include <stdio.h>
#include <stdlib.h>
void main() 
{
    int i,n;
    int *ptr;
    
    
    printf("Clear memory allocation\n");
    printf("\nTo demonstrate the use of calloc(),\na function declared in the <stdlib.h> \nused to dynamically allocate multiple blocks of memory: \nInitial value is zero:\n");
    
    printf("\tEnter the number of intergers :\n");
    scanf("%d",&n);
    printf("Now we will create a dynamic memory location as per our requirement of %d\n",n);
    
    ptr = (int*)calloc(n,sizeof(int));  //no need to calculate memory needed as in malloc
    
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
