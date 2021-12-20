/*
Name : Shahane Om Prashant
*/



#include<stdio.h>
#define N 5
int stack[N];
int top  = -1;

void push()
{
int x;

printf("Enter the value\n");
scanf("%d",&x);
if(top==N-1)
{
printf("Stack Overflow\n");

}
else
{
	top++;
	stack[top] = x;


}


}
void pop()
{
	int item;

	if(top == -1)
	{
		printf("stackUnderflow\n");
	}
	else
	{
		item = stack[top];
		top--;
		printf("%d ",item);
	}
	printf("\n");
}
void peak()
{

	if(top == -1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("%d ",stack[top]);
	}
	printf("\n");
	}
void display()
{
int i;

	for(i = top ; i>= 0;i--)
	{
	printf("%d ",stack[i]);
	}
	printf("\n");
}
void isempty()
{
	if(top == -1)
	{
		printf("The stack is empty\n");

	}
	else
	{
		printf("The stack is not empty\n");
	}
}

void isfull()
{
	if(top == N-1)
	{
		printf("The stack is full\n");
	}
	else
	{
		printf("The stack is not full\n");
	}

}

int main()
{

int ch;

clrscr();
while(1)
{
	printf("Enter your choice\n");
	printf("1. push\n");
	printf("2. pop\n");
	printf("3. peak\n");
	printf("4. display\n");
	printf("5.Isfull\n");
	printf("6.Isempty\n");
	printf("7. exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1 : push();
		break;
	  case 2: pop();
		break;
	  case 3: peak();
		break;
	  case 4: display();
		break;
	  case 5:
		isfull();
		break;
	  case 6:
		isempty();
		break;
	  case 7: exit(0);
	  default : printf("Invalid input\n");
}
}
getch();
return 0;

}
