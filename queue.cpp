#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1;
int que[size];
void enque()
{
	int ele;
	printf("enter the element");
	scanf("%d",&ele);
	if(rear==)
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	rear=rear-1;
	que[rear]=ele;
}
void deque()
{
	int ele;
	is_empty;
	ele=que[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	front=front+1;
	printf("the deleted element is %d",ele);
}
void display()
{
	int i;
	is_empty;
	for(i=front;i<=near;i++)
	printf("%d",que)
	int main()
	{
	int	choice;
		while(1)
		{
			printf("\n ***main menu***\n");
			printf("1.enque\n2.deque\n\n3.display\n4.exit\n");
			printf("%d",&choice);
			switch(choice)
			{
				case 1:enque();break;
				case 2:deque();break;
				case 3:display();break;
				case 4:exit(0);
				default : printf("enter the numbers from 1-4");
			}
		}
	}
	return 0;
}
