#include<iostream>
using namespace std;
int gcd(int a, int b) {

    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // If both numbers are equal
    if (a == b)
        return a;

    // If a is greater
    if (a > b)
      return gcd(a - b, b);


	// If b is greater
    return gcd(a, b - a);
}
int main(){
    int n, n1, n2, d, n3;
    cin >> n;
    cin >> n1 >> n2;
    d = gcd(n1,n2);
 
    for (int i = 1; i <=n-2; i++){
        cin >> n3;
        if (n3%d!=0){
            d = gcd(d,n3);
        }
    }
    cout << d;
return 0;
}