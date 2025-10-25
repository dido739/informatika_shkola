#include <iostream>
using namespace std;

int main() {
    int m, n, count = 0;
    cin >> m >> n;

    int a[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";

            // Check below (vertical neighbor)
            if (i + 1 < m && a[i][j] == a[i + 1][j])
                count++;

            // Check right (horizontal neighbor)
            if (j + 1 < n && a[i][j] == a[i][j + 1])
                count++;
        }
        cout << endl;
    }

    cout << "Count: " << count << endl;
}
