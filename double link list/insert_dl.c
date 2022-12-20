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



void insert(node *head)
{
    int val;
    node *newnode;
    node *p,*q;
    
    newnode =(node*)malloc(sizeof(node));
    printf("Enter the new number\n");
    scanf("%d",&newnode->data);
    
    printf("Insertion to be made before which value?\n");
    scanf("%d",&val);
    
    p=head;
    if(p->data==val)//insertion at the begining
    {
        head=newnode;
        newnode->next=p;
        newnode->prev=NULL;
        p->prev=newnode;
    }
    else
    {
        while(p!=NULL && p->data!=val)
        {
            q=p;
            p=p->next;
        }
        if(p->data ==val)
        {
            newnode->next=p;
            p->prev=newnode;
            newnode->prev=q;
            q->next=newnode;
        }
        else
        {
            printf("Number not found\n");
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
    
    insert(head);
    printf("Insertion completed");
    
    display(head);
}
