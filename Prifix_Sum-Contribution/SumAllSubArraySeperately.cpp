#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int l = 0; l < n; l++) {
        long long sum = 0;
        for (int r = l; r < n; r++) {
            sum += A[r];
            cout << sum << '\n';
        }
    }
}