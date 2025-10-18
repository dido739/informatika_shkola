// Random numbers between 2 and 6, n numbers, sum and average
#include<iostream>
using namespace std;
#include <random>
int main(){
    int n;
    cin>>n;
    int ocenki[n];
    int sum=0;
    for(int i=0;i<n;i++){
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(2, 6); // inclusive
        int r = dist(gen);
        cout << "random: " << r << endl;
        ocenki[i]=r;
        sum+=ocenki[i];
    }
    // for(int i=0;i<5;i++){
    //     sum+=ocenki[i];
    // }
    cout<<sum<<endl;
    cout<<sum*1.0/n<<endl;
    
    // cout<<2 + (rand() % 4);;
    return 0;

}