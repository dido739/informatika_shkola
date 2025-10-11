#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    x=n;
    int tab[n];
    int k=1;
    while(x>0){
        for(int i=0; i<n; i++){
            tab[i]=i+k;
        }
        for(int j=0; j<=n-1; j++){
            // cout<<tab[j]<<" ";
            if(tab[j]>n){
                cout<<2*n-tab[j]<<" ";
            }else{
                cout<<tab[j]<<" ";
            }
        }
        x--;
        cout<<endl;
        k++;
    }
    
}