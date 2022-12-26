//WAP to perform operations on linked lists

#include <stdio.h>
#include <stdlib.h>


struct integer
{
    int data;
    struct integer *next;
};
typedef struct integer node;

node *head;


//////////////////////////////////////////////////////////////////////////////
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


/////////////////////////////////////////////////////////////////////////////
void delete(node **head)
{
    int num;
    node *p,*q;
    
    //printf("head is %d",head);
    printf("Enter the value to be deleted \n");
    scanf("%d",&num);
    
    p= *head;
    if(p->data == num)
    {
        //firstelement
        *head =p->next;
        free(p);
    }
    else //first element is not the required element
    {
        while((p !=NULL)  &&  (p->data != num))
        {
            q=p;
            p=p->next;
        }
        if (p->data == num)
        {
            q->next = p->next ;
            free(p);
        }
        else if (p==NULL)
        {
            printf("ELement not found\n");
        }
        
        
    }
}


///////////////////////////////////////////////////////////////////////////
void display(node *head)
{
    int count =1;
    node *p;
    
    p= head;
    while(p!=NULL)
    {
        printf("Node no.%d :\n %d \n",count,p->data);
        
        count++;
        p=p->next;
    }
    
}

/////////////////////////////////////////////////////////////////
node *insert(node *head)
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
    return head;
    
}
//////////////////////////////////////////////////////////////////

void option(node *head)
{
    int op;
    node *head2;
    
    printf("Choose an operation to perform in this list\n1]Create List\n2]Delete node\n3]Display List\n4]Insert Node\n");
    scanf("%d",&op);
    
    switch (op)
    {
        case 1:
            head = create_list();
            //printf("head is %d",*head);
            printf("Singly linked list of integers is created succesfully\n\n");
            option(head);
    
            
        case 2:
            delete(&head);
            printf("Node has been deleted\n\n");
            option(head);
            
        case 3:
            display(head);
            //3printf("displayed");
            option(head);
            
        //case 4:
            //head2 = insert(head);
            //printf("Element has been inserted\n");
            //option(head2);
        
        default :
            printf("Invalid option\n");
            printf("Exiting program\n");
            main();
    }
    
    
    
}

void main() 
{
    //int op;
    
    
    printf("Singly Linked lists :\n");
    option(head);
    printf("End of program\n");
    //printf("\n");
    
    

}
