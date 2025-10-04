#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int num = 2; num <= n; num++) {
        int sum = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) sum += i;
        }
        if (sum == num) cout << num << " ";
    }
    return 0;
}