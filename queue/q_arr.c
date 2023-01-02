//implementing queue using arrays
#include <stdio.h>
#define size 5

int que[size];
int f=-1;
int r=-1;

int insert()
{
    int item;
    if (r==size-1)
    {
        printf("Queue overflow!\n");
        return;
    }
    printf("Enter value to be inserted\n");
    scanf("%d",&item);
    if(f==-1 && r==-1)
    {
        r++;
        f++;
        que[r]=item;
    }
    else
    {
        r++;
        que[r]=item;
        //printf("%d is r\n",r);
    }
    return r;
}

void display()
{
    int i;
    if(f==-1 && r==-1)
    {
        printf("Queue is empty!\n");
        return;
    }
    else
    {
        for(i=f ; i<=r ; i++)
        {
            printf("%d\n",que[i]);
        }
    }
}


void deleteq()
{
    if (r==-1 && f==-1)
    {
        printf("Queue is empty!\n");
    }
    else if(r==f)
    {
        printf("%d has been deleted\n",que[f]);
    }
    else
    {
        printf("%d has been deleted\n",que[f]);
        f++;
    }
}



void main()
{
   insert();
   insert();
   insert();
   insert(); 
   insert();
   printf("Insertion is completed\n");
   display();
   deleteq();
   printf("Deletion successful\n");
   display();
   
}
