#include <iostream>
using namespace std;
int main ()
{
    int n,m,sum=0,max=INT_MIN, min=INT_MAX,count=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
            sum=sum+a[i][j];
            if(a[i][j]%2!=0)
            {
                count++;
            }
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
    cout<<"Count: "<<count<<endl;
}