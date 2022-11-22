//WAP to execute insertion sort

#include <stdio.h>
#define size 100

void main()
{
    int i,j;
    int arr[size];
    int key,len;
    
    printf("Insertion sort:By Pallavi Khode\n");
    printf("Enter the size of your array : ");
    scanf("%d",&len);
    
    printf("Enter the value of the array :\n");
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The array before sorting is: \n");
    for (i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
    //////////////sorting loop/////////////////////////////////////////
    for (j=1;j<len;j++)
    {
        key=arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key)
        {
            arr[i+1]= arr[i];
            i=i-1;
        }
        arr[i+1]=key;
        
    }
    ///////////////////////////////////////////////////////////////////
    printf("\nThe array after sorting is: \n");
    for (i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
}
