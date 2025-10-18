// 
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> ocenki(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(2, 6); // inclusive

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int r = dist(gen);
        cout << "random: " << r << endl;
        ocenki[i] = r;
        sum += r;
    }

    auto min_it = min_element(ocenki.begin(), ocenki.end());
    auto max_it = max_element(ocenki.begin(), ocenki.end());

    cout << "min = " << *min_it << " at index " << (min_it - ocenki.begin()) << endl;
    cout << "max = " << *max_it << " at index " << (max_it - ocenki.begin()) << endl;

    return 0;
}