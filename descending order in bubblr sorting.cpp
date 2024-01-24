#include<stdio.h>
void sort(int A[],int n)
{
  int i,j,t;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(A[j]<A[j+1])
      {
        t=A[j];
        A[j]=A[j+1];
        A[j+1]=t;
      }
    }
  }
}
int main()
{
  int A[]={9,10,-9,23,67,-90};
  int n=6,i;
  sort(A,n);
  for(i=0;i<n;i++)
    printf("%d",A[i]);
  return 0;
}
