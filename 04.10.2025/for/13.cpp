#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;
    if(n<0){
        n=-n;
        cout<<"-";
    }
    for (n; n > 0; n /= 10) {
        cout << n % 10;
        
    }
    
}