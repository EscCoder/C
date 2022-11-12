//WAP to find a number from an array (a linear search)

#include <stdio.h>

void main() 
{
    int arr[9]={1,9,2,8,3,7,4,6,5};
    int key, i;
    
    printf("Enter a number you want to find from 1 to 9:");
    scanf("%d",&key);
     for (i=0;i<9;i++)
     {
         if (key==arr[i])
         {
             printf("Element found at %d th position",i+1);
        }
     }
    
}
