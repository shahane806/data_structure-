/*
Name : Shahane Om Prashant
*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
char stack[N];
int top = -1;
void push()
{
    char element[50];
    int i;
     printf("Enter element\n");
   scanf("%s",&element);
    for ( i = 0; i < strlen(element); i++)
    {
        if (top == (N-1))
   {
       printf("Stack Overflow\n");
   }
   else
   {
       top++;
       stack[top] = element[i];

   }
    }
    
  
 

   
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        top--;
    }
    
}
void peek()
{
    printf("The peek value is %c\n",stack[top]);
}
void isEmpty()
{
    if (top==-1)
    {
        printf("Stack is empty\n");

    }
    else
    {
        printf("Stack is not empty\n");
    }
    
}
void isFull()
{
    if (top == N-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Stack is not full\n");
    }
    
}
void display()
{
  int i;
  for ( i = top; i >= 0; i--)
  {
     printf("%c",stack[i]);
  }
  printf("\n");
   
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
           case 4: isEmpty(); break;
           case 5: isFull(); break;
           case 6: display(); break;
           case 7: exit(0); break;
           default: printf("Invalid input\n");
        }


    }

    return 0;
}
