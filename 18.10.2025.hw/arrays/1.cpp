#include <unordered_map>
#include <iostream>
#include <sstream>
#include <string>
#include <set>
// Трябва сам да си вкараш данните в масива. :)
using namespace std;
int main () {
    string sentence;
    unordered_map <int , int > score;
    set <int> L = {};
    getline(cin, sentence);
    istringstream iss(sentence);
    int word;
    while (iss >> word) {    // extract words one by one
        score[word]++;
        L.insert(word);
    }
    for (const int x : L) cout <<x<<": "<< score[x] << endl;
}

// За този който чете този код.
// Понеже са късни нощи и ме мързи да сменя имената за променливите.
// Затова този код ти изглежда толкова познат от /data_structures/6.cpp
// Не полудяваш.
// Ако ме намериш някога, свържи се с мен :)
// Приятно травматизиране.