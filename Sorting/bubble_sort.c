//WAP to execute a bubble sort


#include <stdio.h>
#define size 100
void main()
{
    int j,i ;
    int arr[size];
    int temp,len;
    
    printf("Bubble sort\n");
    printf("Enter the size of your array : ");
    scanf("%d",&len);
    
    printf("Enter the value of the array :\n");
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    ///////////////////////////////////////////////////////
  
    printf("The array is:before sorting\n");
    for (i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
    //sorting loop//////////////////////////////////////////////////////////////////
    for (i=1;i<len;i++)
    {
        for (j=0;j<len-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //end of sorting loop//////////////////////////////////////////////////////////////
    
    printf("\nAfter sorting the array is :\n");
    for (i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
}
