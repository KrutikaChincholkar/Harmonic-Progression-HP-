#include <stdio.h>

int main() {
    int a, d, n;
    float sum = 0;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common difference (d): ");
    scanf("%d", &d);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        sum += 1.0 / (a + i * d);
    }

    printf("Sum of HP series = %f", sum);

    return 0;
}
