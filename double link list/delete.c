#include <stdio.h>
#include <stdlib.h>


struct integer
{
    int data;
    struct integer *next;
    struct integer *prev;
};
typedef struct integer node;

void display(node *head)
{
    int i;
    node *q,*p;
    
    p=head;
    
    printf("Double linked list :\n");
    while(p!=NULL)
    {
        q=p;
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    //q=p;
    
    printf("Reveresd Double linked list :\n");
    while(q !=NULL)
    {
        printf("%d\t",q->data);
        q=q->prev;
    }
    
}


/*
node insert(node *head )
{
   
    node *p,*q;
    
    p=head;
    while(p!=NULL)
    {
        q=p;
        p=p->next;
    }
    
    p->next =(node*)malloc(sizeof(node));
    
    
    printf("Enter the data for new node\n");
    scanf("%d",&p->data);
    p=p->next;
    p->next=NULL;
    p->prev =q;
    
}
*/
void deletion(node **head)
{
    node *p,*q;
    int num;
    
    printf("Enter the value to be deleted:\n");
    scanf("%d",&num);
    
    p=*head;
    if(p->data==num)
    {
        *head =p->next;
        free(p);
    }
    else
    {
        while(p!=NULL  &&  p->data!=num)
        {
            q=p;
            p=p->next;
        }
        if(p->data==num)
        {
            q->next=p->next;
            free(p);
        }
        else
        {
            printf("Element not found\n");
        }
        
    }
    
}


node *create_Dlist()
{
    int i,n;
    node *p,*head,*q;
    
    printf("Enter number of nodes you want :\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            head=(node*)malloc(sizeof(node));
            p=head;
            p->prev=NULL;
        }
        else
        {
            q=p;
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
            p->prev = q;
        }
        printf("Enter %d integer:\n",i+1);
        scanf("%d",&p->data);
    }
    p->next=NULL;
    return head;
}


void main() 
{
    node *head;
    head = create_Dlist();
    printf("Doubly linked list of integers is created succesfully\n");
    
    display(head);
    
    deletion(&head);
    printf("Deletion successful\n");
   // insert(head);
    
    display(head);
}
