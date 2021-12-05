#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;

} * head, *tail, *newnode;

void create()
{
    char ch;
    do
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

        printf("Do you want to create another node\n");
        fflush(stdin);
        ch = getchar();

    } while (ch != 'n');
}
void display()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void insert_at_begin()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert_at_end()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void insert_at_pos()
{
    int i = 1, count = 0,pos;
    struct node * temp;
    temp = head;
    while (temp!=NULL)
    {
       
        temp = temp->next;
        count++;
    }
    printf("The length of the linked list is %d\n",count);
    printf("Enter pos\n");
    scanf("%d",&pos);
    if (pos>count)
    {
        printf("Invalid position\n");
    }
    else
        temp = head;
    {
        while (i<(pos-1))
        {
            temp = temp->next;
            i++;   
        }
        
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode ->next = temp->next;
    temp->next->prev = newnode;
    temp ->next = newnode;
    newnode ->prev = temp;
    
    
}
void del_from_begin(){
    struct node * temp;
    temp = head;
    head = temp->next;
    head->prev=NULL;
    free(temp);
}
void del_from_end()
{
    struct node * temp;
    temp = tail;
    tail = tail->prev;
    tail->next = NULL;
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
    nextnode->next->prev = temp;
    
    free(nextnode);   
}
int main()
{
    int ch;
    while (1)
    {
        printf("Enter ch\n");
        printf("!. Create\n");
        printf("2. Display\n");
        printf("3. Insert at begin\n");
        printf("4. Insert at end\n");
        printf("5. Insert at pos\n");
        printf("6. Delete from begin\n");
        printf("7. Delete from end\n");
        printf("8. Delete from position\n");
        printf("9. Exit\n");
        scanf("%d", &ch);
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
        default:
            printf("Invalid input\n");
            break;
        }
    }
    return 0;
}