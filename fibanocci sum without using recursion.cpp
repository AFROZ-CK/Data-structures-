#include <stdio.h>

int main() {
    int n=10, a = 0, b = 1, sum = 0;

    printf("Fibonacci Series: ");
   
    printf("%d %d ", a, b);
    sum = a + b;  

    for (int i = 3; i <= n; ++i) {
        int c = a + b;
        printf("%d ", c);
        sum += c;
        a = b;
        b = c;
    }

    printf("\nSum of the Fibonacci Series: %d", sum);

    return 0;
}
