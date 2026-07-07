#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += A[i] * 1LL * (i + 1) * (n - i);
    }

    cout << ans << '\n';

    return 0;
}