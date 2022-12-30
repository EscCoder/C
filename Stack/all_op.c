// understanding stacks and operations on stacks
#include <stdio.h>
#define size 5

int stack[size];
int top=-1;

int push()
{
    int item;
    
    if(top == size-1)
    {
        printf("Stack overflow !\n");
        return;
    }
    else
    {
        printf("Enter an element in the stack:\nElement->");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
        return top;
    }
    
    
}

void display()
{
    int i;
    
    printf("The stack elements are ->\n");
    for(i=top ; i>=0 ; i--)
    {
        printf("%d\t",stack[i]);
    }
}

void pop()
{
    int item;
    
    if (top== size)
    {
        printf("Stack overflow !n\n");
        return;
    }
    else if ( top == -1)
    {
        printf("Stack underflow !\n");
        return;
    }
    else
    {
        item = stack[top];
        top=top-1;
        printf("\nElement deleted was %d\n",item);
    }
    
}

void peek()
{
    if (top == -1)
    {
        printf("Stack underflow !\n");
    }
    else
    {
        printf("Top element of the stack is %d\n",stack[top]);
    }
}

void main()
{
    push();
    push();
    peek();
    
    push();
    push();
    push();
    
    display();
    pop();
    
    peek();
    display();
}
