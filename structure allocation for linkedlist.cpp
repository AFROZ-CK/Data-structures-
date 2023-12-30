#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL,*t,*p,*newnode;
void creat_SLL()
{
	int n, i, ele;
	printf("Enter the size :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ele);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=35;
newnode->next=NULL;
if(head==NULL)
{
	head=newnode;
	p=newnode;
}
else
{
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
}
}
void display_SLL()
{
	if(head==NULL)
	printf("The SLL is empty");
	else
	for(p=head;p!=newnode;p=p->next);
	printf("%d->",p->data);
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.Creat\n2.Display\n3.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:creat_SLL();break;
			case 2:display_SLL();break;
		}
	}
	return 0;
}
