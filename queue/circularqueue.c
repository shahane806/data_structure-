#include<stdio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int front = -1;
int rare = -1;

void enqueue()
{
    int element;
    printf("Enter data\n");
    scanf("%d",&element);
    printf("The enqueue element is %d\n",element);
    if (front == -1 && rare == -1)
    {
        front = rare = 0;
        queue[rare] = element;
    }
    else if ((rare+1)%N == front)
    {
        printf("The queue is full\n");
    }
    else
    {
        rare = (rare+1)%N;
        queue[rare] = element;
    }
    
     
}
void dequeue()
{
    if (front == -1 && rare == -1)
    {
        printf("The queue is empty\n");
    }
    else if(front == rare)
    {
        front = rare = -1;

    }
    else
    {
        printf("The dequeue element is %d\n",queue[front]);
        front = (front+1)%N;
    }
    
}
void display()
{
    int i = front;
    if (front == -1 && rare == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
        while (i!=rare)
        {
            printf("%d ",queue[i]);
            i = (i+1)%N;
        }
            printf("%d ",queue[i]);
        
    }
    
}
void peek()
{
    if (front == -1 && rare == -1)
    {
        printf("The queue is empty\n");
    }
    else{
        printf("The peek value is %d\n",queue[front]);
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