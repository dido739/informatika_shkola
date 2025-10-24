#include<iostream>
#include<random>
using namespace std;
int main(){
    int n,min=INT_MAX,max=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(-100, 100); // inclusive
        int r = dist(gen);
        cout << "random: " << r << endl;
        arr[i]=r;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }else if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
}
