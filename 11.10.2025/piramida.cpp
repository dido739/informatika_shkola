#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int o=n;
    int u=1;
    int k=0;
    int w=1;
    while(o>0){
        o-=u;
        u++;
        k++;
    }
    // cout<<k<<endl;
    for(int i=1; i<=k; i++){
        int y=1;
        while (y<=i){
            if(w<=n){
                cout<<w<<" ";
                w++;
                y++;
            }else{
                break;
            }
            
        }
        
        cout<<endl;
    }
}