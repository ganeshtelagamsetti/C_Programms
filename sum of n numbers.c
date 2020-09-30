#include <stdio.h>
int main() {
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    sum = (n*n+n)/2;
    
    printf("Sum = %d", sum);
    return 0;
}
