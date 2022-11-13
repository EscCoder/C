//WAP sort an array


#include <stdio.h>

void main() 
{

    int arr[9]={60,13,17,18,11,20,21,15,16};
    int swap=0;
    int i,temp,j;
    printf("Before sorting array is \n");
    for(i=0;i<9;i++)
    {
        printf("%d \t",arr[i]);
    }
    
    
    do{
        swap=0;
        for (i=0;i<9;i++)
        {
            if (arr[i]>arr[i+1])
            {
                swap=swap+1;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        
        }
       // printf("\n swap is %d",swap);
    }while(swap!=0);
    
    printf("\nAfter sorting array is\n");
    for(i=0;i<9;i++)
    {
        printf(" %d\t",arr[i]);
    }
        
    
}
