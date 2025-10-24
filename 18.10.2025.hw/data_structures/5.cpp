#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter count of numbers: ";
    cin >> n;

    set<int> uniqueNumbers;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        uniqueNumbers.insert(x);
    }

    cout << "Count of unique numbers: " << uniqueNumbers.size() << endl;
    for (int x : uniqueNumbers)
        cout << x << " ";


    return 0;
}
