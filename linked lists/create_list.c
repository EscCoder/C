//WAP to create nodes of a list
#include <stdio.h>
#include <stdlib.h>

struct stud                                                                  //our basic structure
{
    int roll;
    char name[25];
    int age ;
    struct stud *link;                                                       //self referential pointer
};

typedef struct stud node;                                                    //making it easy to use 'struct stud'-so -node
    

node *create_list()                                                          //function to create nodes 
{
    int k,n;                                                                 //variables to go through the loops
    node *head,*p;                                                           // pointer of type struct
    
    printf("\nHow many elements to enter Pallavi?\n");
    scanf("%d",&n);
    
    for(k=0;k<n;k++)
    {
        
        if (k==0)
        {
            head=(node*)malloc(sizeof(node));                                 //run time memory alloction for head
            p=head;
        }
        else                // for next nodes in the list
        {
            p->link=(node*)malloc(sizeof(node));                               //run time memory alloction for nodes
            p= p->link;
        }
        printf("\nEnter the data:roll name age\n");                           
        scanf("%d %s %d",&p->roll,&p->name,&p->age);
        //printf("k was %d",k);
    }
    p->link=NULL;                                                              // link of the last node
    return(head);
    
    
}



void main() 
{
    node *head;
    head =create_list();                                   // function call
}
