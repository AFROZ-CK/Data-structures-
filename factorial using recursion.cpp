#include <stdio.h>

int main()
{
    int N=4,fact=1;

    for (int i=1; i<=N;i++)
    {
        fact*=i;
    }

    printf("The factorial of %d is: %d",N,fact);

    return 0;
}
