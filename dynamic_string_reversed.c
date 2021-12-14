/*
Name : Shahane Om Prashant
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
} *top = NULL, *newnode;
void create()
{
    char ch[50];
    int i;
    printf("Enter string\n");
    scanf("%s",&ch);
    for ( i = 0; i < strlen(ch); i++)
    {
         newnode = (struct node *)malloc(sizeof(struct node));
   
   newnode->data = ch[i];
    newnode->next = top;
    top = newnode;
    }
    
   
}
void display()
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("%c", temp->data);
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
    printf("The peek value of stack is %c\n", top->data);

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
