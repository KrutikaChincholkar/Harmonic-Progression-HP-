#include <stdio.h>

int main() {
    int a, d, n;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common difference (d): ");
    scanf("%d", &d);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Harmonic Progression:\n");

    for(int i = 0; i < n; i++) {
        printf("1/%d ", a + i * d);
    }

    return 0;
}
