#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1;
int que[size];

void enque()
{
	int ele;
	printf("enter the elment");
	scanf("%d",&ele);
	if (rear==size-1)
	    printf("Que is full");
	else
	{
	    
	if (front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	rear=rear+1;
	}
	que[rear]=ele;	
}
void deque()
{
	int ele;
	if (front==-1 && rear==-1)
	printf("que is empty");
	else
	{
	ele=que[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	front=front+1;
}
	printf("the deleted element is %d",ele);
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d\t",que[i]);
}
	int main ()
	{
	int	choice;
		while(1)
		{
			printf("\n *** Main Menu *** \n");
			printf("1.Enque\n 2.Deque\n 3.Display\n 4.Exit\n");
			printf("/nEnter the choice :");
			scanf("%d",&choice);
			switch(choice)
			{
			case 1:	enque();break;
			case 2:	deque();break;
			case 3:	display();break;
			case 4:	exit(0);
				default : printf("Enter 1 to 4");
			}
		}
	
	return 0;
}
