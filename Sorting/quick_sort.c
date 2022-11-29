#include<stdio.h>
#define size 20


void divide(int arr[],int st,int end)
{
    int l,r,pivot,temp=0;
    int i;
    
    if(l<r)
    {
        printf("Hello, to divide function\n");
        pivot=st;
        printf("%d is pivot\n",arr[pivot]);
        
        r=end-1;
        l=st+1;
        printf("%d is r | ",r);
        printf("%d is l at the begining\n",l);
        while(r>l)
        
        {
            
            while(l<end && arr[l]<=arr[pivot] )
            {
                l++;  
                printf("%d is l in loop \t |",l);
            }
            while(r>st && arr[r]>arr[pivot])
            {
                r--;
                printf("\t%d is r in loop\n",r);
            }
           
            if (r>l)
            {
                printf("%d is exchanging with %d \n",arr[l],arr[r]);
                temp=arr[l];
                arr[l]=arr[r];
                arr[r]=temp;
            }
        }
        
        
        printf("%d is exchanging with %d \n",arr[r],arr[pivot]);
        temp= arr[pivot];
        arr[pivot]=arr[r];
        arr[r]=temp;
        
        
        printf("New array is --\n");
        printf("The array is:after sorting\n");
        for (i=0;i<end;i++)
        {
            printf("%d",arr[i]);
        }
    }           
    divide(arr,0,r-1);
    divide(arr,r+1,end);
    
}
    
    
    














int main()
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

    divide(arr,0,len);
    return 0;
}
