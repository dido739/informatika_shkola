#include <iostream>
using namespace std;
int main() {
    int a,b; 
    cin>>a>>b;
    int c=min(a,b) ;
    for (;c>1;c--){
        if(a%c==0&&b%c==0){
            break;
        }
    }
    cout <<a/c<< " / " << b/c <<endl ;
    return 0;
}