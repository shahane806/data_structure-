#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *left,*right;
}*nn;
struct node * insert(struct node*p,int d)
{
	if(p ==NULL)
	{
	       nn = (struct node*)malloc(sizeof(struct node));
		nn ->left = nn->right = NULL;
		nn->data =d;
		p=nn;
	}
	else
	{
		if(d<p->data)
		{
			p->left = insert(p->left,d);
		}
		else
		{
			if(d>p->data)
			{
				p->right = insert(p->right,d);
			}
		}
	}
	return (p);
}

void preorder(struct node *root)
{
	if(root == 0)
	{
		return;
	}
	else
	{
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
	}
}
void inorder(struct node * root)
{
	if(root == 0)
	{
		return;
	}
	else
	{

	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
	}
}
	void postorder(struct node *root)
	{
		if(root == 0)
		{
			return ;
		}
		else
		{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
		}
	}

	int countnode1(struct node * root)
	{
		int count = 0;
		if(root == 0)
		{
			return 0;
		}
		else
		{
			count = 1+countnode1(root->left)+countnode1(root->right);
			return count;
		}
	}
	int countnonleaf(struct node * root)
	{
		int c1;
		if(root == NULL)
		{
			return 0;
		}
		else
		{
			if(root->left == NULL && root ->right == NULL )
			return 0;
			else
			c1 = (1+countnonleaf(root->left)+countnonleaf(root->right));
			return c1;
		}
	}

	int countleaf(struct node * root)
	{
		int c;
		if(root == NULL)
		{
			return 0;
		}
		else if((root->left == NULL)&&(root->right==NULL))
		{
			return (1);
		}
		else
		c = (countleaf(root->left)+countleaf(root->right));
		return c;
	}

	void main()
	{
		int x,ch,count,c,c1;
		struct node * root = NULL;
		clrscr();
		do
		{
			printf("\n 1.Insert\n2.Preorder\n3.Inorder\n4.Postorder\n5.Count\n6. leafnodes\n 7. Nonleafnodes\n8.Exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:{
				printf("Enter the node to insert into tree");
				scanf("%d",&x);
				root = insert(root,x);
				break;

				}
				case 2:{
				printf("Preorder is :");
				preorder(root);
				break;

				}
				case 3:
				{
					printf("inorder is :");
					inorder(root);
					break;

				}
				case 4:{
					printf("postorder is:");
					postorder(root);
					break;

				}
				case 5:

				{
					count = countnode1(root);
					printf("No of nodes are %d",count);
					break;
				}
				case 6:
				{
					c = countleaf(root);
					printf("NO of leaf nodes are %d",c);
					break;

				}
				case 7:
				{
					c1 = countnonleaf(root);
						printf("no of not leaf nodes are %d",c1);
						break;

				}
				case 8:
				{
					exit(0);
					break;
				}
				default: printf("invalid input");
			}
			}
			while(ch>0&&ch<8);
			getch();
			}

