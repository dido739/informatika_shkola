#include <unordered_map>
#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;
int main () {
    string sentence;
    unordered_map <string , int > score;
    set <string> L = {};
    getline(cin, sentence);
    istringstream iss(sentence);
    string word;
    while (iss >> word) {    // extract words one by one
        score[word]++;
        L.insert(word);
    }
    for (const string x : L) cout <<x<<": "<< score[x] << endl;
}