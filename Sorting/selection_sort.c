//WAP to execute selection sort
#include <stdio.h>
#define size 100

void main() 
{
    int min,temp;
    int i,j;
    int arr[size],len;
    
    printf("Selection sort\n");
    printf("Enter the length of the array :\n");
    scanf("%d",&len);
    
    printf("Enter the elements of the array :\n");
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The array is:before sorting\n");
    for (i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }

    ////////sorting loop ///////////////////////////////////////////////////////
    for (i=0;i<len-1;i++)
    {
        min=i;
            for (j=i+1;j<len;j++)
            {
                if (arr[j]<arr[min])
                {
                    min=j;
                }
            }
        if (min!=i)    
        {
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    
    ///////////////////////////////////////////////////////////////////
    
    printf("\nThe array is:After sorting\n");
    for (i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
    
    
    
}
