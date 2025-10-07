#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, i=2;
    bool prime=true;
    cin>>n;
    while(i<=ceil(sqrt(n))){
        if(n%i==0){
            prime=false;
        }
        else{
            i++;
            
        }
    }
    if (prime){
        cout<<"Prime";
    }
    else {
        cout<<"Not Prime";
    }
}
