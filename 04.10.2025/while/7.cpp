#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 1;
    while (a <= 100) {
        cout << a << endl;
        int c = a + b;
        a = b;
        b = c;
    }
}