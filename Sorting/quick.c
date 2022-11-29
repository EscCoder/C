#include <stdio.h>
#define size 100

void divide(int arr[],int start,int end)
{
    int l,r,pivot,temp;
    int swap_l,swap_r;
    
    pivot= arr[start];
    printf("%d is pivot",pivot);
    while(r>l)
    {
        if(arr[l]>pivot)
        {
            swap_l=arr[l];
            printf("%d is l to be swaped |\t",swap_l);
            break;
        }
        else
        {
            l++;
        }
        
        if (arr[r]<pivot)
        {
            swap_r=arr[r];
            printf("%d is r to be swaped |\t",swap_r);
            break;
        }
        else
        {
            r--;
        }
        
        temp=swap_l;
        swap_l=swap_r;
        swap_r=temp;
    }
    
    temp=arr[r];
    arr[r]=pivot;
    pivot=temp;
   
}



void main() 
{
    int arr[size],len;
    int i,op;
    /*printf("This is the sorting program:\n");
    printf("Select a sorting method:\n");
    printf("1] Merge sort\n2] Quick sort\n Any other number to exit\n");
    scanf("-->%d",&op);
    */
    
    printf("Enter the size of your array : ");
    scanf("%d",&len);
    
    printf("Enter the value of the array :\n");
    for (i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    divide(arr,0,len);
    
    
    
}
