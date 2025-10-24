#include <list>
#include <iostream>
using namespace std;
int main () {
    list <string> L = {"Atanas", "Mihail", "Ivan", "Carlos", "Andrei", "Michael", "Sebastian", "Max","Fernando"};
    L. push_front ("Lewis");
    L. push_back ("Charles");
    auto it = L.begin();
    advance(it, L.size()/2);
    L.erase(it);
    for (const string x : L) cout << x << " ";
}