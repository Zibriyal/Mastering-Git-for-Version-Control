#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
int prime(int n)
{
    if (n <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Is prime
}