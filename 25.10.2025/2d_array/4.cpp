#include <iostream>
using namespace std;
int main ()
{
    int n,sum=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
        for(int j=0;j<n;j++)
        {
            cout<<a[j][j]<<" ";
            sum+=a[j][j];
        }
        cout<<endl;

    cout<<"Sum: "<<sum<<endl;
}