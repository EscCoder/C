//WAP to display a list
#include <stdio.h>
#include <stdlib.h>

struct wea
{
    char day[10];                           //structure for node
    int temp;
    struct wea *link;
};
typedef struct wea node;                    // use struct wea as node

node *list()
{
    int i,n=7;
    node *p,*head;                          //pointer as function
    
    printf("This is the record of temperatures for first week of december:\n");
    printf("Enter the day and temperature on that respective day:\n");
    
    for (i=0;i<n;i++)
    {
        if (i==0)
        {
            head =(node*)malloc(sizeof(node));                    //create memory space
            p=head;
        }
        else
        {
            p->link=(node*)malloc(sizeof(node));                  //creare memory space
            p=p->link;
        }
        printf("\nSr No. %d\n",i+1);
        
        scanf("%s %d",&p->day,&p->temp);
    }
    
    p->link=NULL;                                                 //link of last node points at NULL 
   
    return(head);                        // return head
}

void display(node *head)
{
    int count =1;
    node *p;
    
    p=head;
    while(p!=NULL)
    {
        printf("Node no.%d :\n %s, %d \n",count,p->day,p->temp);
        
        count++;
        p=p->link;
    }
    return(head);    
}



void main()
{
    node *head;
    head= list();                 //catch the returned head
    display(head);                // pass that head to display
}
