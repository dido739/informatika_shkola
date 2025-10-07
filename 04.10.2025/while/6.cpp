#include<iostream>
using namespace std;
int main(){
    int i = 1, n,fact=1;
    cin >> n;
    while(i <= n){
        fact*=i;
        i++;
    }
    cout << fact << endl;

}