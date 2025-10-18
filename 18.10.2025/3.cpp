#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <string> // added
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> ocenki(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 1000); // inclusive

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

    // count how many numbers contain the digit '6'
    int count6 = count_if(ocenki.begin(), ocenki.end(), [](int x){
        return to_string(x).find('6') != string::npos;
    });
    cout << "numbers containing digit 6: " << count6 << endl;

    // count total occurrences of digit '6' across all numbers
    int total_sixes = 0;
    for (int x : ocenki) {
        string s = to_string(abs(x));
        total_sixes += count(s.begin(), s.end(), '6');
    }
    cout << "total occurrences of digit 6: " << total_sixes << endl;

    return 0;
}