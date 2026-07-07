#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n>>k;

    vector<long long> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long sum = 0;

    for (int i = 0; i < k; i++) {
        sum += A[i];
    }
    long long ans = sum;
    for(int i=k;i<n;i++){
        sum +=A[i];
        sum -=A[i-k];


        ans = max(ans ,sum);

    }

    cout << ans << '\n';

    return 0;
}