#include<iostream>
using namespace std;
int main(){
    int n, i=1, max=INT_MIN, temp;
    cin>>n;
    while(i<=n){
        cin>>temp;
        if(temp>max){
            max=temp;
        }
        i++;
    }
    cout<<max;

}