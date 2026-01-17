#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    int x;
    cin >> x;
    bool found = binary_search(arr, arr + n, x);
    if(found) {
        cout << x << " is present in the array." << endl;
    } else {
        cout << x << " is not present in the array." << endl;
    }
    return 0;
}