// Online C compiler to run C program online
#include <stdio.h>
#define len 50

void linear( int arr[len], int size)
{
    int i;
    int key;
    printf("WE are in a linear function \n");
    /*
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    */
    
    printf("Enter a number you want to find\n ");
    scanf("%d",&key);
     for (i=0;i<size;i++)
     {
         if (key==arr[i])
         {
             printf("Element found at %d  position\n",i+1);
        }
     }
    
}


void binary(int arr[len], int size)
{
    int i,swap;
    int temp=0,find,mid;
    int l=0, h=size-1;
    
    printf("WE are in a binary function, we need to sort our array first\n ");
    printf("Before sorting array is \n ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    do{
        swap=0;
        for(i=0;i<size-1;i++)
        {
          if(arr[i]>arr[i+1])  
          {
              swap=swap+1;
              temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
          }
        }
        
    }while(swap!=0);
    
    printf("\nAfter sorting array is \n ");
    for(i=0;i<size;i++)
    {
        printf("%d;",arr[i]);
    }
    
    
    printf("\nEnter a number you want to find\n ");
    scanf("%d",&find);
    
    
    
    
    
    
    
    
    
    
    
}










void main() 
{
    int op,arr[len];
    int i,size;
    int *ptr;
    
    printf("Welcome to the searching program, enter an array to search\nEnter the array size\nSize=");
    scanf("%d",&size);
   
    printf("Enter the elements \n");
    for (i=0;i<size;i++)
    {
       // printf("i is %d",i);
        scanf("%d",&arr[i]);
    }
    
    printf("The array is \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    ptr=&arr[50];
    
    printf("\nChoose a searching method : \n 1] Linear search\n 2] Binary search\nAny other number to quit\n-->");
    scanf("%d",&op);
    
    switch (op)
    {
        case 1:
            linear(arr,size);
            printf("\nLinear search completed and exiting");
            break;
        case 2:
            binary(arr,size);
            printf("\nBinary search completed and exiting");
            break;
        default:
            printf("--------End------------");
    }
    
    
    
    
    
    // printf("%d",op);
    /*if (op==1)
    {
        linear();
    }
    else if (op==2)
    {
        binary();
    }
    else
    {
        printf("Enter a valid option number ");
    }
    */
}
