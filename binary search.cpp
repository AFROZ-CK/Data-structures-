#include<stdio.h>
int Bin_search(int a[], int n, int key)
{
    int first, last, mid;
    first=0;
    last=n-1;
    while(first<=last)
    {
    mid=(first+last)/2;
    if(a[mid]==key)
    return mid+1;
    else if(a[mid]<key)
    first=mid+1;
    else if(a[mid]>key)
    last=mid-1;
}
return 0;
}
int main()
{
    int a[50], i, n, flag=0, key;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter key to be searched:\n");
    scanf("%d",&key);
    flag=Bin_search(a, n, key);
    if(flag>=1)
    printf("the element is found at position %d\n",flag);
    else
    printf("The elerment is not found");
}
