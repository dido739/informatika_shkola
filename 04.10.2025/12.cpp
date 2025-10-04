#include<iostream>
using namespace std;
int main()
{
    double n, sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=1.0/i;
        }else{
            sum+=1.0/i;
        }
    }
    cout<<sum;
    return 0;
}