#include <bits/stdc++.h>
using namespace std;
int v[1020][1002];
int main()
{
    int ci,cj,qi,br = 0;
    cin>>ci>>cj;
    for(int i = 0 ; i < ci; i++)
    {
        for(int j = 0 ; j < cj; j++)
        {
            cin>>qi;
            v[i][j] = qi;
        }
    }
    for(int i = 0 ; i < ci; i++)
    {
        for(int j = 0 ; j < cj; j++)
        {
            if(v[i][j]!=v[i][j-1]&&v[i][j]!=v[i-1][j])br ++;
        }
    }
    cout<<br<<endl;


    return 0;
}
