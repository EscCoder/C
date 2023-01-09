#include <stdio.h>
#include <stdlib.h>


struct integer
{
    int data;
    struct integer *next;
    struct integer *prev;
};
typedef struct integer node;
node *head;

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

void main() 
{
    
    int op;
    
    printf("Execution of doubly-linked list:\n");
    printf("Select a operation:\n1]Create D-list\n2]Insert Node\n3]Delete Node\n4]Display D-list\n");
    scanf("%d",&op);
    
    switch(op)
    {
        case 1:
            printf("Creating a Doubly linked list\n");
            head = create_Dlist();
            printf("Doubly linked list of integers is created succesfully\n");
            main();
        
        case 2:
            printf("Inserting New node\n");
            insert(head);
            printf("Insertion completed\n");
            main();
            
        case 3:
            printf("Deleting node\n");
            deletion(&head);
            printf("Deletion completed\n");
            main();
            
        case 4:
            printf("The list is \n");
            display(head);
            printf("Display completed\n");
            main();
            
        default :
            printf("Invalid option , exiting the program\n");
            
        
    }
    
    
    
}
