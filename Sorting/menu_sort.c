//WAP to execute menu driven sorting techniques

#include <stdio.h>
#define size 100

void bubble()
{
    int j,i ;
    int arr[size];
    int temp,len;
    
    printf("Bubble sort:By Pallavi Khode\n");
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


void selection()
{
    int min,temp;
    int i,j;
    int arr[size],len;
    
    printf("Selection sort:By Pallavi Khode\n");
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

    ////////sorting loop //////////////////////////
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
    
    ////////////end of sorting////////////////////////////////////////////
    
    printf("\nThe array is:After sorting\n");
    for (i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
}

void insertion()
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
    ///////////////////end of sorting loop////////////////////////////////////////////////
    printf("\nThe array after sorting is: \n");
    for (i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    
}



void main ()
{
    int op;
    
    printf("Welcome to the Sorting Program:By Pallavi Khode\n");
    printf("Which sorting method do you want to use?\n");
    printf("1] Bubble sort\n2] Selection sort\n3] Insertion sort\n Any Other number to exit\n");
    scanf("%d",&op);
    
    switch (op)
    {
        case 1:
            bubble();
            printf("\nBubble sort has been executed:\n");
            main();
        case 2:
            selection();
            printf("\nSelection sort has been executed:\n");
            printf("_________________\n");
            main();
        case 3:
            insertion();
            printf("\nInsertion sort has been executed:\n");
            printf("_________________\n");
            main();
        default :
            printf("Exiting the program:\n");
            break;
    }
    
}
