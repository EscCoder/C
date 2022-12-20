#include <stdio.h>
#include <stdlib.h>


struct integer
{
    int data;
    struct integer *next;
};
typedef struct integer node;

node *create_list()
{
    int i,n;
    node *p,*head;
    
    printf("Enter number of nodes you want :\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            head=(node*)malloc(sizeof(node));
            p=head;
        }
        else
        {
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
            
        }
        printf("Enter %d integer:\n",i+1);
        scanf("%d",&p->data);
    }
    p->next=NULL;
    return head;
}






void insert(node *head)
{
    int val;
    node *newnode;
    node *p,*q;
    
    newnode =(node*)malloc(sizeof(node));
    printf("Enter the new number\n");
    scanf("%d",&newnode->data);
    
    printf("Insertion to be made after which value?\n");
    scanf("%d",&val);
    
    p=head;
    if(p->data==val)//insertion at the begining
    {
        head=newnode;
        newnode->next=p;
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
            newnode->next=p->next;
            p->next=newnode;
        }
        else
        {
            printf("Number not found\n");
        }
    }
    
    
}

void display(node *head)
{
    int count =1;
    node *p;
    
    p=head;
    while(p!=NULL)
    {
        printf("Node no.%d :\n  %d \n",count,p->data);
        
        count++;
        p=p->next;
    }
    //return head;    
}



void main() 
{
    node *head;
    head = create_list();
    printf("Singly linked list of integers is created succesfully\n");
    
    insert(head);
    printf("Element has been inserted\n");
    
    display(head);
    printf("End of the program\n");
}
