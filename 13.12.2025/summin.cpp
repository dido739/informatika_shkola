#include <bits/stdc++.h>
using namespace std;

string to_string_int128(__int128 x) {
    if (x == 0) return "0";
    bool neg = x < 0;
    if (neg) x = -x;
    string s;
    while (x > 0) {
        int d = int(x % 10);
        s.push_back('0' + d);
        x /= 10;
    }
    if (neg) s.push_back('-');
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<long long> a;
    a.reserve(n);
    for (int i = 0; i < n; ++i) {
        long long x; cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());
    __int128 sum = 0;
    for (int k = 0; k < n; ++k) {
        long long cnt = (long long)(n - 1 - k);
        if (cnt > 0) sum += (__int128)a[k] * cnt;
    }

    cout << to_string_int128(sum) << '\n';
    return 0;
}
