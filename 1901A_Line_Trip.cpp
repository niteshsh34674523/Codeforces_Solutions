#include <bits/stdc++.h>
using namespace std;

int minimumFuel(vector<int> &a, int n, int x) {
    int maxDist = a[0];
    for (int i = 1; i < n; ++i) {
        maxDist = max(maxDist, a[i] - a[i - 1]);
    }
    maxDist = max(maxDist, 2 * (x - a[n - 1]));
    return maxDist;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << minimumFuel(a, n, x) << "\n";
    }
    return 0;
}
