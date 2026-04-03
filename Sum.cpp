#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    double sum = 0;

    cout << "Enter first term (a): ";
    cin >> a;

    cout << "Enter common difference (d): ";
    cin >> d;

    cout << "Enter number of terms (n): ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        sum += 1.0 / (a + i * d);
    }

    cout << "Sum of HP series = " << sum;

    return 0;
}
