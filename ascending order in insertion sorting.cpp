#include<stdio.h>

void sort(int A[],int n)
{
  int i,j,t;
  
  for(i=0;i<n-1;i++)
  {
    j=i;
    while(j>0 && A[j]<A[j-1])
    {
      t=A[j];
      A[j]=A[j-1];
      A[j-1]=t;
      j--;
    }
  }
}
int main()
{
  int A[]={98,23,45,14,6,67,33,42},n=8,i;

sort(A,n);

return 0;
}
