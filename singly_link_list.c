#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

}*head,*tail,*newnode;
void create()
{
    char ch;
    do
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
     
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        printf("Do you want to create another node\n y/n\n");
        fflush(stdin);
        ch = getchar();
        
    } while (ch!='n');
    
}
void display()
{
    struct node * temp;
    temp = head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}
void insert_at_begin()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
}
void insert_at_end()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    tail ->next = newnode;
    tail = newnode;
}
void insert_at_pos()
{
  int count = 0,i = 1,pos;
    struct node * temp;
    temp = head;
    while (temp!=NULL)
     {
        temp = temp->next;
        count++;
    }
    printf("The length of the linked list is %d",count);
    printf("Enter pos\n");
    scanf("%d",&pos);
    if (pos>count)
    {
        printf("Invalid position\n");

    }
    else
    {
        temp = head;
        while(i<(pos-1))
        {
            temp = temp->next;
            i++;   
        }
    }
    newnode = (struct node * )malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&newnode ->data) ;
    newnode ->next = temp ->next;
    temp ->next = newnode;
       
    
    
    
}
void del_from_begin()
{
    struct node * temp;
    temp = head;
    head = temp->next;
    free(temp);
}
void del_from_end()
{
    struct node * prev,*temp;
     temp = head;   
     while (temp->next!= NULL)
     {
         prev = temp;
         temp = temp->next;
     }
     prev->next=NULL;
     free(temp);
     
}
void del_from_pos()
{

    int i = 1,pos;
    struct node*temp,*nextnode;
    temp = head;
    printf("Enter the position\n");
    scanf("%d",&pos);
    while(i<(pos-1))
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}
int main()
{
    int cn;
    while (1)
    {
        
    
    
    printf("Enter cn\n");
    printf("1.Create\n2.Display\n3.Insert at begin\n4.Insert at end\n5.Insert at pos\n");
    printf("\n6.Delete from begin\n7.Delete from end\n8.Exit");
    scanf("%d",&cn);
    switch (cn)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3: 
        insert_at_begin();
        break;
    case 4:
        insert_at_end();
        break;
    case 5:
        insert_at_pos();
        break;
    case 6:
        del_from_begin();
        break;
    case 7:
        del_from_end();
        break;
    case 8:
        exit(0);
    default:printf("Invalid Input\n");
    }
    }
    return 0;
}