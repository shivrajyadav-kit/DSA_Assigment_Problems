#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long A[n];

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long ans = A[0];
    int location = 1; 

    for(int i = 1; i < n; i++) {
        if(A[i] < ans) {
            ans = A[i];
            location = i + 1;
        }
    }

    cout << ans << " " << location;
    return 0;
}