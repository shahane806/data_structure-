#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * newnode, *temp, *front = NULL, *rare = NULL;

void enqueue()
{
     int element;
     printf("Enter data in the node\n");
     scanf("%d",&element);
     printf("The data entered is %d\n",element);
     newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = element;
    newnode -> next = NULL;
  if (rare == NULL)
  {
      front = rare = newnode;
      rare -> next = front;
  }
  else
  {
      rare->next = newnode;
      rare = newnode;
      rare->next = front;
  }
    
    
}
void dequeue()
{
    temp = front;
    if (front == NULL && rare == NULL)
    {
        printf("The queue is empty\n");
    }
    else if (front == rare)
    {
        front = rare = NULL;
        printf("Dequeue element is %d\n",temp->data);
        free(temp);
    }
    else
    {
        front = front->next;
        printf("Dequeue element is %d\n",temp->data);

        free(temp);
    }
    
    
    
}
void display()
{
    temp = front;
    if (front == NULL && rare == NULL)
    {
        printf("The queue is empty\n");
        
    }
    else
    {
while (temp!=rare)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}
}
void peek()
{
    if (front==NULL && rare == NULL)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The peek value of the queue is %d\n",front->data);
    }
    
    
}

int main()
{

    int ch;
    while (ch!=5)
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
        case 4: peek(); break;
        case 5: exit(0); break;
        default: printf("Invalid input\n");
        }
    }
    return 0;
}