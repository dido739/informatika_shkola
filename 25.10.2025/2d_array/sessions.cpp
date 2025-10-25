#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    int total = 0;
    int streak = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] < K) {
            streak = 0;
        } else {
            if (i > 0 && A[i] <= A[i - 1] && A[i - 1] >= K)
                streak++;
            else
                streak = 1;
            total += streak;
        }
    }

    cout << total << "\n";
    return 0;
}
