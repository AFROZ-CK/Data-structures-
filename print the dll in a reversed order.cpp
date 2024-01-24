#include<stdio.h>
#include<stdlib.h>
int top=-1,stk[50];
struct node
{
    int ele;
    struct node * next;
    struct node * prev;
}*head=NULL, *t, *p, *newnode;
void create()
{
    int i, n, ele;
    printf("size:\n");
    scanf("%d",&n);
    printf("elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ele);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->ele=ele;
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
void push(int x)
{
	top=top+1;
	stk[top]=x;
}
void reverse_DLL()
{
	int i;
	for(p=head;p->next=NULL;p=p->next);
	for(;p->prev!=NULL;p=p->prev)
	{
		printf("<-%d",p->ele);
	}
	for(i=top;i>=0;i--)
	printf("% d->",stk[i]);
}
void display()
{
    t=head;
    printf("\nreverse of the list:");
    while(t!=NULL)
    {
`    printf("%d->",t->ele);
        t=t->next;
    }
}
int main()
{
    create();
    reverse_DLL();
    display();
	return 0;
}
