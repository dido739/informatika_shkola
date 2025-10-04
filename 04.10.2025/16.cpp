#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;
    cout << "Въведете число: ";
    cin >> n;
    original = n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed) {
        cout << "Числото е палиндром." << endl;
    } else {
        cout << "Числото не е палиндром." << endl;
    }

    return 0;
}