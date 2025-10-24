#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int> numbers;
    int x;

    while (iss >> x) {
        numbers.push_back(x);
    }

    sort(numbers.begin(), numbers.end());

    cout << "Sorted numbers: ";
    for (int num : numbers) cout << num << " ";
    cout << endl;

    if (numbers.size() >= 2) {
        cout << "Second greatest item: " << numbers[numbers.size()-2] << endl;
    }

    return 0;
}


