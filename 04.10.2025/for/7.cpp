#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (n; n > 0; n /= 10) {
        cout << n % 10;
        
    }
}