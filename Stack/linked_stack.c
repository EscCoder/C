// Demonstrate all operations on stack using linked lists concept


#include <stdio.h>
#include <stdlib.h>

struct integer  //structure for stack
{
    int data;
    struct integer *link;  //self referencing pointer
};

typedef struct integer node;

node *top=NULL; //a node type pointer pointing to the top of the stack

void push()
{
    //insert a new element in the stack
    node *new;
    
    new =(node*)malloc(sizeof(node));//memory allocation in a heap 
    printf("Enter the value->\n");
    scanf("%d",&new->data);//
    new->link=top;
    top=new;
}

void display()
{
    int i;
    node *temp;
    
    //printf("this is display function & top data is %d\n",top->data);
    if (top == NULL)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        temp=top;
        //printf("temp data is %d",temp->data);
        while (temp != NULL) //we are using while loop because initiating a for loop was a problem
        {
            printf("%d\t",temp->data);
            temp = temp->link;
        }
    }
}

void pop()
{
    node *temp;
    
    if(top == NULL)
    {
        printf("Stack underflow!\n");
        return;
    }
    else
    {
        temp = top;
        top = temp->link;
        printf("\nElement %d has been poped\n",temp->data);
        free(temp);
    }
}

void peek()
{
    if(top == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("\nTop element of the stack is %d\n",top->data);
    }
}


void main()
{
    push();
    push();
    push();
    push();
    peek();
    printf("Stack using linked list has been created\n");
    display();
    pop();
    display();
    peek();
}
