//WAP to delete the specified node from the list of integers
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

void delete(node **head)
{
    int num;
    node *p,*q;
    
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




void main() 
{
    node *head;
    head = create_list();
    printf("Singly linked list of integers is created succesfully\n");
    delete(&head);
    printf("Deletion was successful\n");
}

