#include<stdio.h>
#include<stdlib.h>
int top=-1,stk[50];
struct node
{
    int ele;
    struct node * next;
}*head=NULL, *t, *p, *newnode;
void create(int ele)
{
    
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

void push(int x)
{
	top=top+1;
	stk[top]=x;
}
void reverse()
{
	int i;
	for(p=head;p!=NULL;p=p->next)
	{
		push(p->ele);
	}
	for(i=top;i>=0;i--)
	printf("%d->",stk[i]);
}
void display()
{
    t=head;
    printf("\n");
    while(t!=NULL)
    {
        printf("%d->",t->ele);
        t=t->next;
    }
}
int main()
{
    create(2);
  	create(4);
  	create(3);
  	reverse();
  	display();
	return 0;
}
