
#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rare = -1;
void push()
{
    int data;
    printf("Enter data\n");
    scanf("%d",&data);
    
    if (rare == (N-1))
    {
        printf("Queue is overflow\n");
    }
    
    else if (front == -1 && rare == -1)
    {
        front++;
        rare++;
        queue[rare] = data;
    }
    else
    {
         rare++;
        queue[rare] = data;
    }
    
    
    
}
void pop()
{
    if (front == -1 && rare == -1)
    {
        printf("The queue is Underflow\n");
    }
    else if (front== rare)
    {
        front =  rare = -1;
    }
    else
    {
        front++;
        printf("POPED\n");
    }
    
    
    
}
void display()
{
    int i;
    for ( i = front; i<rare+1; i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
    
    
}
void peek()
{
   printf("The peek value is %d\n",queue[front]);
}
void isempty()
{
    if (front == -1 && rare == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The queue is not empty\n");
    }
    
}
void isfull()
{
    if (rare == (N-1))
    {
        printf("The Queue is Full\n");

    }
    else
    {
        printf("The Queue is Not Full\n");
    }    
}
int main()
{
    int ch;
    while (1)
    {
        

        printf("Enter your choice\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. isEmpty\n");
        printf("5. isFull\n");
        printf("6. display\n");
        printf("7. exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1: push(); break;
           case 2: pop(); break;
           case 3: peek(); break;
           case 4: isempty(); break;
           case 5: isfull(); break;
           case 6: display(); break;
           case 7: exit(0); break;
           default: printf("Invalid input\n");
        }


    }   
    return 0;
}
