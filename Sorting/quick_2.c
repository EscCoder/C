#include<stdio.h>
#define size 20

int partition(int arr[],int l,int h)
{
    int pivot,temp;
    int i=l,j=h;
    pivot= arr[l];
    
    while(i<j)
    {
        do
        {
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        
        }while(arr[j]>pivot);
        
        if (i<j)
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    
    temp=arr[l];
    arr[l]=arr[j];
    arr[j]=temp;
    
    return j;
    
    
}

void quicksort(int arr[],int l,int h)
{
    int j;
    
    if (l<h)
    {
       j= partition(arr,l,h);
       quicksort(arr,l,j);
       quicksort(arr,j+1,h);
    }
}




void main()
{
    int arr[size],len;
    int i;
    
    printf("Enter array size-->\n");
    scanf("%d",&len);
    printf("array elements \n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    quicksort(arr,0,len-1);
    
    printf("New array is --\n");
    printf("The array is:after sorting\n");
    for (i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
