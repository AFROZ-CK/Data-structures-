#include<stdio.h>
int main()
{
	int a[10],i,n,oddcount=0,evencount=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			evencount++;
		}else{
			oddcount++;
		}
	}
		printf("count of even numbers:%d\n",evencount);
		printf("count of odd numbers:%d\n",oddcount);
		

	return 0;
}

