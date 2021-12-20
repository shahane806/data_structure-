/*
Name : Shahane Om Prashant
*/


#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL, *newnode;
void create()
{
    int element, rev = 0, remainder;
    printf("Enter element\n");
    scanf("%d",&element);
    while (element!=0)
    {
        remainder = element%10;
        rev = rev*10+remainder;
        element/=10;
    }
    
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = rev;
    newnode->next = top;
    top = newnode;
}
void display()
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void isEmpty()
{
    if (top == NULL)
    {
        printf("The stack is Empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }
}
void peek()
{
    if (top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
    printf("The peek value of stack is %d\n", top->data);

    }
    
}

void pop()
{
    if (top==NULL)
    {
        printf("Stack is empty\n");

    }
    else
    {
        struct node *temp;
    temp = top;
    top = top->next;
    free(temp);
    }
    
}
int main()
{
    int ch;
    while (1)
    {
        printf("Enter your choice\n");
        printf("1.Create\n");
        printf("2.Pop\n");
        printf("3.Display\n");

        printf("4.IsEmpty\n");
        printf("5.peek\n");
        printf("6.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            peek();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    }

    return 0;
}
