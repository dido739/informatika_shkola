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
    bool inc = true;
    for(int j = 0; j + 1 < n; j++) {
        if(arr[j] > arr[j + 1]){
            inc = false;
            break;
        }
    }
    if(inc){
        cout<<"The array is sorted in increasing order."<<endl;
    } else {
        cout<<"The array is not sorted in increasing order."<<endl;
    }
    return 0;
}