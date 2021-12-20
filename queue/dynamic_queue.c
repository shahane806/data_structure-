#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*newnode,*front = NULL,*rare = NULL;

void push()
{

    int element;
    printf("Enter data\n");
    scanf("%d",&element);
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = element;
    newnode->next = NULL;
    if (front == NULL && rare == NULL)
    {
        front = rare = newnode;
    }
    else
    {
        rare -> next = newnode;
        rare = newnode;
    }
    

}
void pop()
{
    struct node * temp;
    if (front == NULL && rare == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
    
}
void display()
{
    struct node * temp;
   
    if (front == NULL && rare == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {   
         temp = front;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp= temp->next;
        }
        printf("\n");
    }
    
}
void peek()
{
    printf("The peek value is %d\n",front->data);
}
void isempty()
{
    if (front == NULL && rare == NULL)
    {
        printf("Queue is Empty\n");
    }
    else 
    {
        printf("Queue is Not Empty\n");

    }
}


int main()
{
    int ch;
    while (1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. IsEmpty\n");
        printf("6. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: isempty(); break;
            case 6: exit(0); break;
            default: printf("Invalid Input\n"); break;
        }
    }
    
    return 0;
}
