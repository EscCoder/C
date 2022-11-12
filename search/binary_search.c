//WAP to search an element in an array by binary search method

#include <stdio.h>

void main() 
{
    int arr[9]={13,14,15,16,17,18,19,20,21};
    int find,i,mid;
    int l=0 , h=8;
    
    printf("Enter the number you want to find :");
    scanf("%d",&find);
    
    for(i=0;i<9;i++)
    {
        mid=(l+h)/2;
        if (arr[mid]==find)
        {
            printf("Element %d found at %d",find,mid+1);
            break;
        }
        else if (arr[mid]<find)
        {
            l=mid+1;
        }
        else//(arr[mid]>find)
        {
            h=h-1;
        }
        
    }
}
