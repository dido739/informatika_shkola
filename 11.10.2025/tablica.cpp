#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        int currentValue = i;
        bool isIncreasing = true;
        for(int j = 1; j <= n; j++) {
            cout << currentValue;
            if (j < n) {
                cout << " ";
            }

            if (isIncreasing && currentValue < n) {
                currentValue++;
            } else {
                isIncreasing = false;
                currentValue--;
            }
        }
        cout<<endl;
    }
}