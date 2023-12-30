#include<stdio.h>
int stk[50],top=-1;
void push (int x)
{
	top=top+1;
	stk[top]=x;
}
int pop()
{
	return (stk[top--]);
}	
int main ()
{
	int i,op2,op1,result;
	char st[50],op;
	scanf("%s",st);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>='0' && st[i]<='9')
		push (st[i]-'0');
		else
		{
			op=st[i];
			op2=pop();
			op1=pop();
			switch(op)
			{
				push(op1+op2);break;
				push(op1-op2);break;
				push(op1*op2);break;
				push(op1/op2);break;
			}
		}
	}
	result=stk[top];
	printf("The output = %d",result);
}

	}
