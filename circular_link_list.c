#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;

}*head,*tail,*newnode;
void create()
{
    char ch;
    do
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&newnode->data);
       
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
             newnode->next=head;
        }
        else
        {
           tail->next = newnode;
           tail = newnode;
            newnode->next=head;


        }
        
        
        fflush(stdin);
        ch=getchar();
    } while (ch!='n');
    
}
void display()
{
    struct node* temp;
        temp= head;
    
    while (temp!=tail)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);
    
}
void insert_at_begin()
{
   newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    tail ->next= newnode;
}
void insert_at_end()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    tail->next = newnode;
    newnode->next = head;
    tail = newnode;
}
void insert_at_pos()
{
    int i = 0,pos;
    struct node * temp;
    temp= head;
    
  
    printf("Enter position\n");
    scanf("%d",&pos);
 
  
        while (i<(pos-1))
        {
            temp=temp->next;
            i++;
        }
        
  
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    newnode ->next = temp->next;
    temp->next = newnode;
    
    
}
void del_from_begin()
{
    struct node * temp;
    temp = head;
    head = temp->next;
    tail->next = head;
    free(temp);
}
void del_from_end()
{
    struct node *prevnode,*temp;
    temp = head;
    while(temp!=tail)
    {
        prevnode=temp;
        temp = temp->next;

    }
    prevnode->next=head;
    tail =prevnode;
    free(temp);
}
void del_from_pos()
{
       int i = 1,pos;
    struct node *temp,*nextnode;
    temp = head;
    printf("Enter the position\n");
    scanf("%d",&pos);
    while(i<(pos-1))
    {
        temp = temp->next;
        i++;
    }
   
    temp->next = nextnode->next;
    
    free(nextnode);
    
}
int main()
{
    int ch;
    while(1)
    {
    printf("1. Create\n");
    printf("2. Display\n");
    printf("3. Insert at begin\n");
    printf("4. Insert at end\n");
    printf("5. Insert at position\n");
    printf("6. Delete from begin\n");
    printf("7. Delete from end\n");
    printf("8. Delete from position\n");
    printf("9. Exit\n");
    scanf("%d",&ch);
    switch (ch)
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
        del_from_pos();
        break;
    case 9:
        exit(0);
        break;
    default:printf("Invalid Input\n");
        break;
    }
    }
    return 0;
}