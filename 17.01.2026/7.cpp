#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int j = 0; j < n; j++) {
        cin >> arr[j];
    }

    int x;
    cin >> x;

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < x) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}