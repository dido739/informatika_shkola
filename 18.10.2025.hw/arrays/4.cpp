#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;
    cout << "Enter a line of text: ";
    getline(cin, line);  // read full line from user

    istringstream iss(line);
    vector<string> words;
    string word;

    // Split line into words
    while (iss >> word) {
        words.push_back(word);
    }

    // Sort words by length (shortest to longest)
    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return a.size() < b.size();
    });

    cout << "Words sorted by length: ";
    for (const string &w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}
