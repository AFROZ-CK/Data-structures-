#include<stdio.h>
int main()
{
	int a[50],i,n,flag=0,key,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("enter the key element");
		scanf("%d",&key);
		for(i=0;i<n;i++)
		{
			if(a[i]==key)
			{
				flag=1;
				pos=1;
				break;
				if(flag==1){
				printf("the key element is found at %d position",pos);
			}else{
				printf("not found");
			}
			}
		}
	}
	return 0;
}
