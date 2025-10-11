#include<iostream>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    for(int s1 = 1; s1 <= n; s1++) {
        for(int s2 = 1; s2 <= n; s2++) {
            for(char s3 = 'a'; s3 < 'a' + l; s3++) {
                for(char s4 = 'a'; s4 < 'a' + l; s4++) {
                    int max_s1_s2 = s1 > s2 ? s1 : s2;
                    for(int s5 = max_s1_s2 + 1; s5 <= n; s5++) {
                        cout << s1 << s2 << s3 << s4 << s5 << " ";
                    }
                }
            }
        }
    }
    cout << endl;
}