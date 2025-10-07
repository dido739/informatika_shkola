#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i=0;n>0;i++){
        count++;
        n=n/10;
    }
    cout<<count;
    return 0;


}