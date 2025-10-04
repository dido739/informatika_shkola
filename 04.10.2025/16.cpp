#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;
    cin >> n;
    original = n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}