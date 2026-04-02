#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    float term;

    cout << "Enter first term (a): ";
    cin >> a;

    cout << "Enter common difference (d): ";
    cin >> d;

    cout << "Enter term number (n): ";
    cin >> n;

    term = 1.0 / (a + (n - 1) * d);

    cout << "The " << n << "th term of HP is: " << term;

    return 0;
}
