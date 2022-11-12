//WAP sort an array

// Online C compiler to run C program online
#include <stdio.h>

void main() 
{
    int arr[9]={60,13,17,18,11,20,21,15,16};
    int i,temp,j;
    printf("Before sorting array is \n");
    for(i=0;i<9;i++)
    {
        printf("%d \t",arr[i]);
    }
    
    
    for (j=0;j<9;j++)
    {
        for (i=0;i<9;i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    
    printf("\nAfter sorting array is\n");
    for(i=0;i<9;i++)
    {
        printf(" %d\t",arr[i]);
    }
        
    
}
