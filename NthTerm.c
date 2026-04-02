#include <stdio.h>

int main() {
    int a, d, n;
    float term;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common difference (d): ");
    scanf("%d", &d);

    printf("Enter term number (n): ");
    scanf("%d", &n);

    term = 1.0 / (a + (n - 1) * d);

    printf("The %dth term of HP is: %f", n, term);

    return 0;
}
