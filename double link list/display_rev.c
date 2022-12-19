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
    
    while(p!=NULL)
    {
        q=p;
        printf("%d\t",p->data);
        p=p->next;
    }
    
    //q=p;
    
    while(q !=NULL)
    {
        printf("%d\t",q->data);
        q=q->prev;
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
}
