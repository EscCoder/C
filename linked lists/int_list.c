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

void main() 
{
    node *head;
    head = create_list();
    printf("Singly linked list of integers is created succesfully\n");

}
